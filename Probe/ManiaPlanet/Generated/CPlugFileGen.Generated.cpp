#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileGen* CPlugFileGen::CreateInstance ()
    {
        return static_cast < CPlugFileGen* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CPlugFileGen::GenKindToString ( eGenKind value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "GenKind" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CPlugFileGen::eGenKind CPlugFileGen::ParseGenKind ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "GenKind" );
        return (eGenKind)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CPlugFileGen::eGenKind CPlugFileGen::GetGenKind () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GenKind" );
        struct
        {
            eGenKind* pResult;
            eGenKind storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugFileGen::SetGenKind ( CPlugFileGen::eGenKind value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GenKind" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
