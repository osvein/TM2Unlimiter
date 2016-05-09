#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManialinkLabel* CGameManialinkLabel::CreateInstance ()
    {
        return static_cast < CGameManialinkLabel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    StringW CGameManialinkLabel::GetValue () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Value" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameManialinkLabel::SetValue ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Value" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGameManialinkLabel::SetText ( StringW wstrnewText )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrnewText );
        CallMethod ( &stack, NULL );
    }

}
