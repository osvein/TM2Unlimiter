#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialFxs* CPlugMaterialFxs::CreateInstance ()
    {
        return static_cast < CPlugMaterialFxs* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < class CPlugMaterialFx* >& CPlugMaterialFxs::GetMaterialFxs () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaterialFxs" );
        struct
        {
            Array < class CPlugMaterialFx* >* pResult;
            Array < class CPlugMaterialFx* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugMaterialFxs::SetMaterialFxs ( Array < class CPlugMaterialFx* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MaterialFxs" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
