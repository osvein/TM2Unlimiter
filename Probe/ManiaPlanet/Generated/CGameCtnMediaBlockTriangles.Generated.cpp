#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTriangles* CGameCtnMediaBlockTriangles::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTriangles* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSceneMobil* CGameCtnMediaBlockTriangles::GetMobil () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mobil" );
        class CSceneMobil* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnMediaBlockTriangles::SetMobil ( class CSceneMobil* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Mobil" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
