#include "StdInc.h"

namespace ManiaPlanet
{

    CGameScriptDebugger* CGameScriptDebugger::CreateInstance ()
    {
        return static_cast < CGameScriptDebugger* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameScriptDebugger::VisibilityToString ( eVisibility value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Visibility" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameScriptDebugger::eVisibility CGameScriptDebugger::ParseVisibility ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Visibility" );
        return (eVisibility)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CGameScriptDebugger::eVisibility CGameScriptDebugger::GetVisibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Visibility" );
        struct
        {
            eVisibility* pResult;
            eVisibility storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameScriptDebugger::SetVisibility ( CGameScriptDebugger::eVisibility value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Visibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
