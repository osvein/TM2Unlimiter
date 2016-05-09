#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManialinkFrame* CGameManialinkFrame::CreateInstance ()
    {
        return static_cast < CGameManialinkFrame* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameManialinkControl> >& CGameManialinkFrame::GetControls () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Controls" );
        struct
        {
            List < nodptr<class CGameManialinkControl> >* pResult;
            List < nodptr<class CGameManialinkControl> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameManialinkFrame::SetControls ( List < nodptr<class CGameManialinkControl> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Controls" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameManialinkControl* CGameManialinkFrame::GetFirstChild ( StringA strControlId )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetFirstChild" );
        class CGameManialinkControl* pChild = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strControlId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pChild ) );
        CallMethod ( &stack, NULL );
        return pChild;
    }

}
