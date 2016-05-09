#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialFxGenCV* CPlugMaterialFxGenCV::CreateInstance ()
    {
        return static_cast < CPlugMaterialFxGenCV* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CPlugMaterialFxGenCV::GetDeltaYMax () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DeltaYMax" );
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

    void CPlugMaterialFxGenCV::SetDeltaYMax ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DeltaYMax" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CPlugMaterialFxGenCV::GetDeltaYMin () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DeltaYMin" );
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

    void CPlugMaterialFxGenCV::SetDeltaYMin ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DeltaYMin" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CPlugMaterial* >& CPlugMaterialFxGenCV::GetMaterialToRayCasts () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaterialToRayCasts" );
        struct
        {
            Array < class CPlugMaterial* >* pResult;
            Array < class CPlugMaterial* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugMaterialFxGenCV::SetMaterialToRayCasts ( Array < class CPlugMaterial* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaterialToRayCasts" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
