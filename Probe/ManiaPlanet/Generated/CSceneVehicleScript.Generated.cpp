#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneVehicleScript* CSceneVehicleScript::CreateInstance ()
    {
        return static_cast < CSceneVehicleScript* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsItem* CSceneVehicleScript::GetContact_Item1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Item1" );
        class CHmsItem* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneVehicleScript::SetContact_Item1 ( class CHmsItem* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Item1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CHmsItem* CSceneVehicleScript::GetContact_Item2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Item2" );
        class CHmsItem* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneVehicleScript::SetContact_Item2 ( class CHmsItem* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Item2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CSceneVehicleScript::GetContact_Material1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Material1" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneVehicleScript::SetContact_Material1 ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Material1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CSceneVehicleScript::GetContact_Material2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Material2" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneVehicleScript::SetContact_Material2 ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Material2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneVehicleScript::GetContact_Normal () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Normal" );
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

    void CSceneVehicleScript::SetContact_Normal ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Normal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneVehicleScript::GetContact_Position () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Position" );
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

    void CSceneVehicleScript::SetContact_Position ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Position" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneVehicleScript::GetContact_RelativeSpeed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_RelativeSpeed" );
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

    void CSceneVehicleScript::SetContact_RelativeSpeed ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_RelativeSpeed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec3D CSceneVehicleScript::GetContact_Replacement () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Replacement" );
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

    void CSceneVehicleScript::SetContact_Replacement ( Vec3D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_Replacement" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CSceneVehicleScript::GetContact_StillExists () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_StillExists" );
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

    void CSceneVehicleScript::SetContact_StillExists ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Contact_StillExists" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CMwCmdBlockMain* CSceneVehicleScript::GetGameplayScript () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameplayScript" );
        class CMwCmdBlockMain* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneVehicleScript::SetGameplayScript ( class CMwCmdBlockMain* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GameplayScript" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    void CSceneVehicleScript::AddVehicleForce ( Vec3D vecforce, Vec3D vecrelativeapplicationpoint )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVehicleForce" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecrelativeapplicationpoint );
        stack.Push ( vecforce );
        CallMethod ( &stack, NULL );
    }

    void CSceneVehicleScript::AddVehicleTorque ( Vec3D vectorque )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddVehicleTorque" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vectorque );
        CallMethod ( &stack, NULL );
    }

    void CSceneVehicleScript::AddWorldForce ( Vec3D vecforce, Vec3D vecrelativeapplicationpoint )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddWorldForce" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecrelativeapplicationpoint );
        stack.Push ( vecforce );
        CallMethod ( &stack, NULL );
    }

    float CSceneVehicleScript::GetReal ( StringA strfieldName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetReal" );
        float fvalue;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strfieldName );
        stack.Push ( fvalue );
        CallMethod ( &stack, NULL );
        return fvalue;
    }

    Vec3D CSceneVehicleScript::GetVehiclePosition ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetVehiclePosition" );
        Vec3D vecvehicleposition;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecvehicleposition );
        CallMethod ( &stack, NULL );
        return vecvehicleposition;
    }

    Matrix43 CSceneVehicleScript::GetVehicleRotation ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetVehicleRotation" );
        Matrix43 vehiclerotation;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vehiclerotation );
        CallMethod ( &stack, NULL );
        return vehiclerotation;
    }

    Vec3D CSceneVehicleScript::GetVehicleSpeed ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetVehicleSpeed" );
        Vec3D vecvehiclespeed;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecvehiclespeed );
        CallMethod ( &stack, NULL );
        return vecvehiclespeed;
    }

    void CSceneVehicleScript::LetReal ( StringA strfieldName, float fvalue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LetReal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fvalue );
        stack.Push ( strfieldName );
        CallMethod ( &stack, NULL );
    }

    void CSceneVehicleScript::SetReal ( StringA strfieldName, float fvalue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetReal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fvalue );
        stack.Push ( strfieldName );
        CallMethod ( &stack, NULL );
    }

}
