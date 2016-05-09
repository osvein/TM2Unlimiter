#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorPluginScriptHandler* CGameCtnEditorPluginScriptHandler::CreateInstance ()
    {
        return static_cast < CGameCtnEditorPluginScriptHandler* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameCtnEditorPluginScriptHandler::CursorDirToString ( eCursorDir value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "CursorDir" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnEditorPluginScriptHandler::eCursorDir CGameCtnEditorPluginScriptHandler::ParseCursorDir ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "CursorDir" );
        return (eCursorDir)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnEditorPluginScriptHandler::EditModeToString ( eEditMode value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EditMode" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnEditorPluginScriptHandler::eEditMode CGameCtnEditorPluginScriptHandler::ParseEditMode ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EditMode" );
        return (eEditMode)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGameCtnEditorPluginScriptHandler::PlaceModeToString ( ePlaceMode value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PlaceMode" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnEditorPluginScriptHandler::ePlaceMode CGameCtnEditorPluginScriptHandler::ParsePlaceMode ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PlaceMode" );
        return (ePlaceMode)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    List < nodptr<class CGameCtnEditorScriptSpecialProperty> >& CGameCtnEditorPluginScriptHandler::GetAnchorData () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnchorData" );
        struct
        {
            List < nodptr<class CGameCtnEditorScriptSpecialProperty> >* pResult;
            List < nodptr<class CGameCtnEditorScriptSpecialProperty> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetAnchorData ( List < nodptr<class CGameCtnEditorScriptSpecialProperty> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnchorData" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnBlockInfo> >& CGameCtnEditorPluginScriptHandler::GetBlockModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockModels" );
        struct
        {
            List < nodptr<class CGameCtnBlockInfo> >* pResult;
            List < nodptr<class CGameCtnBlockInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetBlockModels ( List < nodptr<class CGameCtnBlockInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockModels" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnEditorPluginScriptHandler::GetBlockStockMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockStockMode" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetBlockStockMode ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockStockMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnBlock> >& CGameCtnEditorPluginScriptHandler::GetBlocks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Blocks" );
        struct
        {
            List < nodptr<class CGameCtnBlock> >* pResult;
            List < nodptr<class CGameCtnBlock> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetBlocks ( List < nodptr<class CGameCtnBlock> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Blocks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnEditorPluginScriptHandler::GetCameraHAngle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraHAngle" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCameraHAngle ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraHAngle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnEditorPluginScriptHandler::GetCameraToTargetDistance () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraToTargetDistance" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCameraToTargetDistance ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraToTargetDistance" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnEditorPluginScriptHandler::GetCameraVAngle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraVAngle" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCameraVAngle ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CameraVAngle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnBlockInfo* CGameCtnEditorPluginScriptHandler::GetCursorBlockModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorBlockModel" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorPluginScriptHandler::SetCursorBlockModel ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorBlockModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint3 CGameCtnEditorPluginScriptHandler::GetCursorCoord () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorCoord" );
        struct
        {
            uint3* pResult;
            uint3 storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCursorCoord ( uint3 value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorCoord" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnEditorPluginScriptHandler::eCursorDir CGameCtnEditorPluginScriptHandler::GetCursorDir () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorDir" );
        struct
        {
            eCursorDir* pResult;
            eCursorDir storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCursorDir ( CGameCtnEditorPluginScriptHandler::eCursorDir value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorDir" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnMacroBlockInfo* CGameCtnEditorPluginScriptHandler::GetCursorMacroblockModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorMacroblockModel" );
        class CGameCtnMacroBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorPluginScriptHandler::SetCursorMacroblockModel ( class CGameCtnMacroBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorMacroblockModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfo* CGameCtnEditorPluginScriptHandler::GetCursorTerrainBlockModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorTerrainBlockModel" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorPluginScriptHandler::SetCursorTerrainBlockModel ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CursorTerrainBlockModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < uint3 >& CGameCtnEditorPluginScriptHandler::GetCustomSelectionCoords () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomSelectionCoords" );
        struct
        {
            List < uint3 >* pResult;
            List < uint3 > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCustomSelectionCoords ( List < uint3 >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomSelectionCoords" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CGameCtnEditorPluginScriptHandler::GetCustomSelectionRGB () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomSelectionRGB" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetCustomSelectionRGB ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CustomSelectionRGB" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnEditorPluginScriptHandler::eEditMode CGameCtnEditorPluginScriptHandler::GetEditMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditMode" );
        struct
        {
            eEditMode* pResult;
            eEditMode storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetEditMode ( CGameCtnEditorPluginScriptHandler::eEditMode value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnMacroBlockInfo> >& CGameCtnEditorPluginScriptHandler::GetMacroblockModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MacroblockModels" );
        struct
        {
            List < nodptr<class CGameCtnMacroBlockInfo> >* pResult;
            List < nodptr<class CGameCtnMacroBlockInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetMacroblockModels ( List < nodptr<class CGameCtnMacroBlockInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MacroblockModels" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameManialinkPage* CGameCtnEditorPluginScriptHandler::GetManialinkPage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkPage" );
        class CGameManialinkPage* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorPluginScriptHandler::SetManialinkPage ( class CGameManialinkPage* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkPage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    StringA CGameCtnEditorPluginScriptHandler::GetManialinkText () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkText" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetManialinkText ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnChallenge* CGameCtnEditorPluginScriptHandler::GetMap () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Map" );
        class CGameCtnChallenge* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorPluginScriptHandler::SetMap ( class CGameCtnChallenge* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Map" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    int CGameCtnEditorPluginScriptHandler::GetNow () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Now" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetNow ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Now" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnEditorPluginScriptEvent> >& CGameCtnEditorPluginScriptHandler::GetPendingEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        struct
        {
            List < nodptr<class CGameCtnEditorPluginScriptEvent> >* pResult;
            List < nodptr<class CGameCtnEditorPluginScriptEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetPendingEvents ( List < nodptr<class CGameCtnEditorPluginScriptEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnEditorPluginScriptHandler::ePlaceMode CGameCtnEditorPluginScriptHandler::GetPlaceMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceMode" );
        struct
        {
            ePlaceMode* pResult;
            ePlaceMode storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetPlaceMode ( CGameCtnEditorPluginScriptHandler::ePlaceMode value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CGameCtnEditorPluginScriptHandler::GetTargetedPosition () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TargetedPosition" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetTargetedPosition ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TargetedPosition" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameCtnBlockInfo> >& CGameCtnEditorPluginScriptHandler::GetTerrainBlockModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TerrainBlockModels" );
        struct
        {
            List < nodptr<class CGameCtnBlockInfo> >* pResult;
            List < nodptr<class CGameCtnBlockInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetTerrainBlockModels ( List < nodptr<class CGameCtnBlockInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TerrainBlockModels" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGamePlaygroundUILayer> >& CGameCtnEditorPluginScriptHandler::GetUILayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        struct
        {
            List < nodptr<class CGamePlaygroundUILayer> >* pResult;
            List < nodptr<class CGamePlaygroundUILayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetUILayers ( List < nodptr<class CGamePlaygroundUILayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnEditorPluginScriptHandler::GetUndergroundMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UndergroundMode" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorPluginScriptHandler::SetUndergroundMode ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UndergroundMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGameCtnEditorPluginScriptHandler::AutoSave ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AutoSave" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    uint CGameCtnEditorPluginScriptHandler::CanPlaceBlock ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceBlock" );
        uint uiVariantIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( uiVariantIndex );
        CallMethod ( &stack, NULL );
        return uiVariantIndex;
    }

    uint CGameCtnEditorPluginScriptHandler::CanPlaceBlock_NoDestruction ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceBlock_NoDestruction" );
        uint uiVariantIndex;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( uiVariantIndex );
        CallMethod ( &stack, NULL );
        return uiVariantIndex;
    }

    bool CGameCtnEditorPluginScriptHandler::CanPlaceMacroblock ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceMacroblock" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::CanPlaceMacroblock_NoDestruction ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceMacroblock_NoDestruction" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::CanPlaceRoadBlocks ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceRoadBlocks" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::CanPlaceTerrainBlocks ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CanPlaceTerrainBlocks" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    void CGameCtnEditorPluginScriptHandler::ComputeShadows ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ComputeShadows" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_AddOrSubSelection ( int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_AddOrSubSelection" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_Copy ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_Copy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_Cut ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_Cut" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_Remove ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_Remove" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_ResetSelection ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_ResetSelection" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::CopyPaste_SelectAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_SelectAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    bool CGameCtnEditorPluginScriptHandler::CopyPaste_Symmetrize ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CopyPaste_Symmetrize" );
        bool bSymmetrizedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( bSymmetrizedOk );
        CallMethod ( &stack, NULL );
        return bSymmetrizedOk;
    }

    class CGameCtnBlock* CGameCtnEditorPluginScriptHandler::GetBlock ( int3 coord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetBlock" );
        class CGameCtnBlock* pBlock = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlock ) );
        CallMethod ( &stack, NULL );
        return pBlock;
    }

    uint CGameCtnEditorPluginScriptHandler::GetBlockGroundHeight ( class CGameCtnBlockInfo* pBlockModel, int iCoordX, int iCoordZ, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetBlockGroundHeight" );
        uint uiCoordY;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( iCoordZ );
        stack.Push ( iCoordX );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( uiCoordY );
        CallMethod ( &stack, NULL );
        return uiCoordY;
    }

    class CGameCtnBlock* CGameCtnEditorPluginScriptHandler::GetStartLineBlock ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetStartLineBlock" );
        class CGameCtnBlock* pStartLineBlock = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pStartLineBlock ) );
        CallMethod ( &stack, NULL );
        return pStartLineBlock;
    }

    void CGameCtnEditorPluginScriptHandler::Help ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Help" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::HideCustomSelection ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HideCustomSelection" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::OpenToolsMenu ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OpenToolsMenu" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceBlock ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceBlock" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceBlock_NoDestruction ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceBlock_NoDestruction" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceMacroblock ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceMacroblock" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceMacroblock_NoDestruction ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceMacroblock_NoDestruction" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( dir );
        stack.Push ( coord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceRoadBlocks ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceRoadBlocks" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceTerrainBlocks ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceTerrainBlocks" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::PlaceTerrainBlocks_NoDestruction ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlaceTerrainBlocks_NoDestruction" );
        bool bPlacedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pBlockModel ) );
        stack.Push ( bPlacedOk );
        CallMethod ( &stack, NULL );
        return bPlacedOk;
    }

    void CGameCtnEditorPluginScriptHandler::Quit ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Quit" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::Redo ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Redo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAllBlocks ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAllBlocks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAllBlocksAndTerrain ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAllBlocksAndTerrain" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAllObjects ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAllObjects" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAllOffZone ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAllOffZone" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::RemoveAllTerrain ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveAllTerrain" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    bool CGameCtnEditorPluginScriptHandler::RemoveBlock ( int3 coord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveBlock" );
        bool bRemovedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( coord );
        stack.Push ( bRemovedOk );
        CallMethod ( &stack, NULL );
        return bRemovedOk;
    }

    bool CGameCtnEditorPluginScriptHandler::RemoveTerrainBlocks ( int3 startCoord, int3 endCoord )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveTerrainBlocks" );
        bool bRemovedOk;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( endCoord );
        stack.Push ( startCoord );
        stack.Push ( bRemovedOk );
        CallMethod ( &stack, NULL );
        return bRemovedOk;
    }

    void CGameCtnEditorPluginScriptHandler::SaveMacroblock ( class CGameCtnMacroBlockInfo* pMacroblockModel )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SaveMacroblock" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pMacroblockModel ) );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::SaveMap ( StringW wstrFileName, StringW wstrPath )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SaveMap" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrPath );
        stack.Push ( wstrFileName );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::ShowCustomSelection ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowCustomSelection" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    class CGamePlaygroundUILayer* CGameCtnEditorPluginScriptHandler::UILayerCreate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerCreate" );
        class CGamePlaygroundUILayer* pLayer = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        CallMethod ( &stack, NULL );
        return pLayer;
    }

    void CGameCtnEditorPluginScriptHandler::UILayerDestroy ( class CGamePlaygroundUILayer* pLayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerDestroy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::UILayerDestroyAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerDestroyAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::Undo ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Undo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorPluginScriptHandler::Validate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Validate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
