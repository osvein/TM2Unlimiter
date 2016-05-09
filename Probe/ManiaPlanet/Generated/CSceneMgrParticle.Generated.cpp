#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrParticle* CSceneMgrParticle::CreateInstance ()
    {
        return static_cast < CSceneMgrParticle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsItem* CSceneMgrParticle::GetItemParticles () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ItemParticles" );
        class CHmsItem* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneMgrParticle::SetItemParticles ( class CHmsItem* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ItemParticles" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
