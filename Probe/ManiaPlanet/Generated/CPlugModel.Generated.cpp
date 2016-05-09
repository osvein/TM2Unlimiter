#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugModel* CPlugModel::CreateInstance ()
    {
        return static_cast < CPlugModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CPlugModel::GetExportScale () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ExportScale" );
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

    void CPlugModel::SetExportScale ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ExportScale" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CPlugModelTree* CPlugModel::GetModelTree () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ModelTree" );
        class CPlugModelTree* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugModel::SetModelTree ( class CPlugModelTree* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ModelTree" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    StringA CPlugModel::GetOrigin () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Origin" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugModel::SetOrigin ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Origin" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CPlugModel::GetVertexPositionsQuantize () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VertexPositionsQuantize" );
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

    void CPlugModel::SetVertexPositionsQuantize ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VertexPositionsQuantize" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
