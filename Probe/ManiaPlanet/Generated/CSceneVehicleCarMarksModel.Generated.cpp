#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneVehicleCarMarksModel* CSceneVehicleCarMarksModel::CreateInstance ()
    {
        return static_cast < CSceneVehicleCarMarksModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    bool CSceneVehicleCarMarksModel::GetDisabled () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Disabled" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneVehicleCarMarksModel::SetDisabled ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Disabled" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CSceneVehicleCarMarksModelSub> >& CSceneVehicleCarMarksModel::GetModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Models" );
        struct
        {
            List < nodptr<class CSceneVehicleCarMarksModelSub> >* pResult;
            List < nodptr<class CSceneVehicleCarMarksModelSub> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneVehicleCarMarksModel::SetModels ( List < nodptr<class CSceneVehicleCarMarksModelSub> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Models" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
