#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_Campaign* CGamePlayerProfileChunk_Campaign::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_Campaign* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnCampaign* CGamePlayerProfileChunk_Campaign::GetCampaign () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Campaign" );
        class CGameCtnCampaign* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlayerProfileChunk_Campaign::SetCampaign ( class CGameCtnCampaign* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Campaign" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
