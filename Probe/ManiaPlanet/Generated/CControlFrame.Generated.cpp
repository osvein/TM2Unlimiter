#include "StdInc.h"

namespace ManiaPlanet
{

    CControlFrame* CControlFrame::CreateInstance ()
    {
        return static_cast < CControlFrame* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < Matrix43 >& CControlFrame::GetChildsRelativeLocations () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChildsRelativeLocations" );
        struct
        {
            Array < Matrix43 >* pResult;
            Array < Matrix43 > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlFrame::SetChildsRelativeLocations ( Array < Matrix43 >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChildsRelativeLocations" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
