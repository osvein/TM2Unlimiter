#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncCloudsSolids* CFuncCloudsSolids::CreateInstance ()
    {
        return static_cast < CFuncCloudsSolids* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Vec2D CFuncCloudsSolids::GetGridSizeXZ () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GridSizeXZ" );
        struct
        {
            Vec2D* pResult;
            Vec2D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CFuncCloudsSolids::SetGridSizeXZ ( Vec2D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GridSizeXZ" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CPlugSolid> >& CFuncCloudsSolids::GetSolidFids () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SolidFids" );
        struct
        {
            List < nodptr<class CPlugSolid> >* pResult;
            List < nodptr<class CPlugSolid> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CFuncCloudsSolids::SetSolidFids ( List < nodptr<class CPlugSolid> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SolidFids" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
