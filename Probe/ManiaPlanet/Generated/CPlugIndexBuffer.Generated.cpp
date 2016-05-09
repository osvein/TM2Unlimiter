#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugIndexBuffer* CPlugIndexBuffer::CreateInstance ()
    {
        return static_cast < CPlugIndexBuffer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CPlugIndexBuffer::IndexTypeToString ( eIndexType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "IndexType" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CPlugIndexBuffer::eIndexType CPlugIndexBuffer::ParseIndexType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "IndexType" );
        return (eIndexType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    uint CPlugIndexBuffer::GetIndexCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndexCount" );
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

    void CPlugIndexBuffer::SetIndexCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndexCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CPlugIndexBuffer::eIndexType CPlugIndexBuffer::GetIndexType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndexType" );
        struct
        {
            eIndexType* pResult;
            eIndexType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugIndexBuffer::SetIndexType ( CPlugIndexBuffer::eIndexType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndexType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CPlugIndexBuffer::GetIsStatic () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsStatic" );
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

    void CPlugIndexBuffer::SetIsStatic ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsStatic" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
