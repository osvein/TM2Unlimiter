#include "StdInc.h"

using namespace ManiaPlanet;
using namespace pugi;

TM2Unlimiter* TM2Unlimiter::GetInstance ()
{
    static TM2Unlimiter instance;
    return &instance;
}

CGameCtnBlock* TM2Unlimiter::PreventOverlappedBlockRemoval ( CGameCtnBlock* pBlock )
{
    if ( pBlock && pBlock->GetBlockInfo ()->Is ( CGameCtnBlockInfoClip::CLASSID ) )
        return pBlock;

    return NULL;
}

void TM2Unlimiter::RelinkBlockUnits ( CGameCtnChallenge* pChallenge )
{
    pChallenge->RelinkBlockUnits ();
}

CGameCtnBlock* TM2Unlimiter::GetOverlappedPillarBlock ( CGameCtnEditorCommon* pEditor, CGameCtnBlock* pBlock )
{
    if ( !pBlock || pBlock->IsPillar () )
        return pBlock;

    Array < CGameCtnBlockUnit* >& units = pBlock->GetBlockUnits ();

    List < nodptr<CGameCtnBlock> >& blocks = pEditor->GetChallenge ()->GetBlocks ();
    for ( auto it = blocks.Begin (); it != blocks.End (); ++it )
    {
        if ( !(*it)->IsPillar () )
            continue;

        for ( auto it2 = units.Begin (); it2 != units.End (); it2++ )
        {
            if ( (*it)->GetCoord () == (*it2)->GetPosition () )
                return *it;
        }
    }
    return pBlock;
}

void TM2Unlimiter::SetCustomTrackSize ( CGameCtnChallenge* pChallenge )
{
    CGameCtnDecorationSize* pDecorationSize = pChallenge->GetDecoration ()->GetDecoSize ();
    uint3 vecDefaultSize = pDecorationSize->GetSize ();
    
    uint3 vecBuildSize = pChallenge->GetSize ();

    if ( pChallenge->NumBlocks () == 0 && pChallenge->NumZones () == 0 )
    {
        // New challenge: apply custom-defined environment size default
        std::wstring wstrCustomSize = Settings::GetString ( L"NewTrackSizes",
            pChallenge->GetCollection ()->GetName () );

        std::wregex re ( L"^\\s*(\\d+)\\s*,\\s*(\\d+)\\s*,\\s*(\\d+)\\s*" );
        std::wsmatch match;
        if ( std::regex_search ( wstrCustomSize, match, re ) )
        {
            vecBuildSize.X = _wtoi ( match[1].str ().c_str () );
            vecBuildSize.Y = _wtoi ( match[2].str ().c_str () );
            vecBuildSize.Z = _wtoi ( match[3].str ().c_str () );
        }
    }
    if ( vecBuildSize.X <= 0 || vecBuildSize.X > 255 ||
         vecBuildSize.Y <= 0 || vecBuildSize.Y > 255 ||
         vecBuildSize.Z <= 0 || vecBuildSize.Z > 255 )
    {
        vecBuildSize = vecDefaultSize;
    }
    pDecorationSize->SetSize ( vecBuildSize );
}

void TM2Unlimiter::EnrichChallengeXml ( CGameCtnChallenge* pChallenge, StringA* pstrXml )
{
    xml_document doc;
    doc.load_buffer ( pstrXml->CStr (), pstrXml->Size () );
    xml_node headerNode = doc.select_single_node ( L"header" ).node ();
    xml_node unlimiterNode = headerNode.append_child ( L"unlimiter" );

    xml_node mapSizeNode = unlimiterNode.append_child ( L"map_size" );
    mapSizeNode.append_child ( pugi::node_pcdata ).set_value (
        StringUtil::Format (
            L"%d %d %d",
            pChallenge->GetSize ().X,
            pChallenge->GetSize ().Y,
            pChallenge->GetSize ().Z
        ).c_str ()
    );

    std::set < CGameCtnBlockInfo* > customBlockInfos;
    ManiaPlanet::List < nodptr<CGameCtnBlock> >& blocks = pChallenge->GetBlocks ();
    CSystemFidsDrive* pPersonalDrive = CMwEngineMain::GetInstance ()->GetSystemEngine ()->GetPersonalDrive ();
    for ( auto it = blocks.Begin (); it != blocks.End (); it++ )
    {
        CGameCtnBlockInfo* pBlockInfo = (*it)->GetBlockInfo ();
        if ( pBlockInfo->GetFid () && pPersonalDrive->IsAncestorOf ( pBlockInfo->GetFid ()->GetFolder () ) )
            customBlockInfos.insert ( pBlockInfo );
    }

    if ( !customBlockInfos.empty () )
    {
        xml_node customBlocksNode = unlimiterNode.append_child ( L"custom_blocks" );
        for ( auto it = customBlockInfos.begin (); it != customBlockInfos.end (); it++ )
        {
            xml_node blockNode = customBlocksNode.append_child ( L"block" );
            blockNode.append_attribute ( L"name" ).set_value ( StringUtil::ToUTF16 ( (*it)->GetNodMeta ()->m_idUid.Resolve () ).c_str () );
            blockNode.append_attribute ( L"author" ).set_value ( StringUtil::ToUTF16 ( (*it)->GetNodMeta ()->m_idAuthor.Resolve () ).c_str () );
        }
    }

    std::wstringstream stream;
    doc.save ( stream, L"", format_no_declaration | format_raw );
    *pstrXml = StringUtil::ToUTF8 ( stream.str () ).c_str ();
}
