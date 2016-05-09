#include "StdInc.h"

namespace ManiaPlanet
{

    CControlFrameStyled* CControlFrameStyled::CreateInstance ()
    {
        return static_cast < CControlFrameStyled* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlStyleSheet* CControlFrameStyled::GetStyleSheet () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleSheet" );
        class CControlStyleSheet* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlFrameStyled::SetStyleSheet ( class CControlStyleSheet* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StyleSheet" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
