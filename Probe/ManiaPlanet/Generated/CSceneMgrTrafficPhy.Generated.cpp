#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrTrafficPhy* CSceneMgrTrafficPhy::CreateInstance ()
    {
        return static_cast < CSceneMgrTrafficPhy* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CSceneMgrTrafficPhy::GetAirGravityCoef () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AirGravityCoef" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetAirGravityCoef ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AirGravityCoef" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneMgrTrafficPhy::GetCar_BackLeftWheelRelativePos () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_BackLeftWheelRelativePos" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetCar_BackLeftWheelRelativePos ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_BackLeftWheelRelativePos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneMgrTrafficPhy::GetCar_BackRightWheelRelativePos () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_BackRightWheelRelativePos" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetCar_BackRightWheelRelativePos ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_BackRightWheelRelativePos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneMgrTrafficPhy::GetCar_FrontLeftWheelRelativePos () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_FrontLeftWheelRelativePos" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetCar_FrontLeftWheelRelativePos ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_FrontLeftWheelRelativePos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneMgrTrafficPhy::GetCar_FrontRightWheelRelativePos () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_FrontRightWheelRelativePos" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetCar_FrontRightWheelRelativePos ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Car_FrontRightWheelRelativePos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CSceneMgrTrafficPhy::GetMaxUnevenWithoutJump () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaxUnevenWithoutJump" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetMaxUnevenWithoutJump ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaxUnevenWithoutJump" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CSceneMgrTrafficPhy::GetPhysicallisationCollSurfScale () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhysicallisationCollSurfScale" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetPhysicallisationCollSurfScale ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhysicallisationCollSurfScale" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CPlugTrafficShapedTrajectory> >& CSceneMgrTrafficPhy::GetShapedTrajectories () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShapedTrajectories" );
        struct
        {
            List < nodptr<class CPlugTrafficShapedTrajectory> >* pResult;
            List < nodptr<class CPlugTrafficShapedTrajectory> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetShapedTrajectories ( List < nodptr<class CPlugTrafficShapedTrajectory> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShapedTrajectories" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CPlugTrafficGraph* CSceneMgrTrafficPhy::GetTrafficGraph () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficGraph" );
        class CPlugTrafficGraph* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneMgrTrafficPhy::SetTrafficGraph ( class CPlugTrafficGraph* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TrafficGraph" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class _0A02D000* CSceneMgrTrafficPhy::GetVehiclePhyModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VehiclePhyModel" );
        class _0A02D000* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneMgrTrafficPhy::SetVehiclePhyModel ( class _0A02D000* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VehiclePhyModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    float CSceneMgrTrafficPhy::GetVelMaxSqrTobeConsideredStatic () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VelMaxSqrTobeConsideredStatic" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetVelMaxSqrTobeConsideredStatic ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VelMaxSqrTobeConsideredStatic" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneMgrTrafficPhy::GetVertiDownMaxHeight () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VertiDownMaxHeight" );
        struct
        {
            Vec3D* pResult;
            Vec3D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneMgrTrafficPhy::SetVertiDownMaxHeight ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VertiDownMaxHeight" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CSceneMgrTrafficPhy::CheckPointWholeTrafficFlow ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CheckPointWholeTrafficFlow" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CSceneMgrTrafficPhy::PhysicallizeAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PhysicallizeAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CSceneMgrTrafficPhy::ResetTraffic ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ResetTraffic" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CSceneMgrTrafficPhy::UnPhysicallizeAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UnPhysicallizeAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
