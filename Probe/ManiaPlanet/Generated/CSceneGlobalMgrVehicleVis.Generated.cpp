#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneGlobalMgrVehicleVis* CSceneGlobalMgrVehicleVis::CreateInstance ()
    {
        return static_cast < CSceneGlobalMgrVehicleVis* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CSceneVehicleVisModelHandle> >& CSceneGlobalMgrVehicleVis::GetModelHandles () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ModelHandles" );
        struct
        {
            List < nodptr<class CSceneVehicleVisModelHandle> >* pResult;
            List < nodptr<class CSceneVehicleVisModelHandle> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneGlobalMgrVehicleVis::SetModelHandles ( List < nodptr<class CSceneVehicleVisModelHandle> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ModelHandles" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
