#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneToySeaHouleFixe* CSceneToySeaHouleFixe::CreateInstance ()
    {
        return static_cast < CSceneToySeaHouleFixe* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CSceneToySeaHouleFixe::GetCoefFoam () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CoefFoam" );
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

    void CSceneToySeaHouleFixe::SetCoefFoam ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CoefFoam" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CSceneToySeaHouleFixe::GetExposantFoam () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ExposantFoam" );
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

    void CSceneToySeaHouleFixe::SetExposantFoam ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ExposantFoam" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
