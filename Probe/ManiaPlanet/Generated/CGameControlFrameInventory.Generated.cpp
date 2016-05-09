#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlFrameInventory* CGameControlFrameInventory::CreateInstance ()
    {
        return static_cast < CGameControlFrameInventory* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameControlCardGeneric> >& CGameControlFrameInventory::GetFreeCards () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FreeCards" );
        struct
        {
            List < nodptr<class CGameControlCardGeneric> >* pResult;
            List < nodptr<class CGameControlCardGeneric> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlFrameInventory::SetFreeCards ( List < nodptr<class CGameControlCardGeneric> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FreeCards" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameControlGridCard* CGameControlFrameInventory::GetGridCards () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GridCards" );
        class CGameControlGridCard* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlFrameInventory::SetGridCards ( class CGameControlGridCard* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GridCards" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    void CGameControlFrameInventory::InitItems ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InitItems" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
