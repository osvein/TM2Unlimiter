#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionEmitterFlock* CMotionEmitterFlock::CreateInstance ()
    {
        return static_cast < CMotionEmitterFlock* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSceneFlockModel* CMotionEmitterFlock::GetFlockModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FlockModel" );
        class CSceneFlockModel* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CMotionEmitterFlock::SetFlockModel ( class CSceneFlockModel* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FlockModel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CMotionEmitterFlock::GetIsLandingArea () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsLandingArea" );
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

    void CMotionEmitterFlock::SetIsLandingArea ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsLandingArea" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CMotionEmitterFlock::GetIsRepulsor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsRepulsor" );
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

    void CMotionEmitterFlock::SetIsRepulsor ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsRepulsor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CMotionEmitterFlock::GetPower () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Power" );
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

    void CMotionEmitterFlock::SetPower ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Power" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CMotionEmitterFlock::GetRadius () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Radius" );
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

    void CMotionEmitterFlock::SetRadius ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Radius" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CMotionEmitterFlock::GetSpawnCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpawnCount" );
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

    void CMotionEmitterFlock::SetSpawnCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpawnCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CMotionEmitterFlock::UpdateParams ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UpdateParams" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
