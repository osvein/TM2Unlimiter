#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugParticleMaterialImpactModel* CPlugParticleMaterialImpactModel::CreateInstance ()
    {
        return static_cast < CPlugParticleMaterialImpactModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CPlugParticleMaterialImpactModel::GetDefaultMaterial () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultMaterial" );
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

    void CPlugParticleMaterialImpactModel::SetDefaultMaterial ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DefaultMaterial" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CPlugParticleImpactModel> >& CPlugParticleMaterialImpactModel::GetImpactModels () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ImpactModels" );
        struct
        {
            List < nodptr<class CPlugParticleImpactModel> >* pResult;
            List < nodptr<class CPlugParticleImpactModel> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugParticleMaterialImpactModel::SetImpactModels ( List < nodptr<class CPlugParticleImpactModel> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ImpactModels" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
