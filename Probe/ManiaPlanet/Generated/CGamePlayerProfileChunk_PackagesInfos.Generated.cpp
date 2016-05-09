#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_PackagesInfos* CGamePlayerProfileChunk_PackagesInfos::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_PackagesInfos* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CGamePlayerProfileChunk_PackagesInfos::GetPackagesInfosCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackagesInfosCount" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfileChunk_PackagesInfos::SetPackagesInfosCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackagesInfosCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
