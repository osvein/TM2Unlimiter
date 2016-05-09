#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneToyCharacter* CSceneToyCharacter::CreateInstance ()
    {
        return static_cast < CSceneToyCharacter* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class _010C1000* CSceneToyCharacter::GetPhyCharModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharModel" );
        class _010C1000* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneToyCharacter::SetPhyCharModel ( class _010C1000* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhyCharModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CSceneCharVisModelHandle* CSceneToyCharacter::GetVisCharModelHandle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VisCharModelHandle" );
        class CSceneCharVisModelHandle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneToyCharacter::SetVisCharModelHandle ( class CSceneCharVisModelHandle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VisCharModelHandle" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
