#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugParticleEmitterModel* CPlugParticleEmitterModel::CreateInstance ()
    {
        return static_cast < CPlugParticleEmitterModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    bool CPlugParticleEmitterModel::GetIsSplashMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsSplashMode" );
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

    void CPlugParticleEmitterModel::SetIsSplashMode ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsSplashMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CPlugParticleEmitterSubModel> >& CPlugParticleEmitterModel::GetParticleEmitterSubModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ParticleEmitterSubModels" );
        struct
        {
            List < nodptr<class CPlugParticleEmitterSubModel> >* pResult;
            List < nodptr<class CPlugParticleEmitterSubModel> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugParticleEmitterModel::SetParticleEmitterSubModels ( List < nodptr<class CPlugParticleEmitterSubModel> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ParticleEmitterSubModels" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
