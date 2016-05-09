#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorBlockSolidInterface* CGameCtnEditorBlockSolidInterface::CreateInstance ()
    {
        return static_cast < CGameCtnEditorBlockSolidInterface* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlContainer* CGameCtnEditorBlockSolidInterface::GetInterfaceRoot () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InterfaceRoot" );
        class CControlContainer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorBlockSolidInterface::SetInterfaceRoot ( class CControlContainer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InterfaceRoot" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
