#include "StdInc.h"

namespace ManiaPlanet
{

    CSmAnticheatEvent* CSmAnticheatEvent::CreateInstance ()
    {
        return static_cast < CSmAnticheatEvent* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CSmAnticheatEvent::TypeToString ( eType value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Type" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CSmAnticheatEvent::eType CSmAnticheatEvent::ParseType ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Type" );
        return (eType)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    uint CSmAnticheatEvent::GetPlayerShoot_Direction () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerShoot_Direction" );
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

    void CSmAnticheatEvent::SetPlayerShoot_Direction ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerShoot_Direction" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CSmAnticheatEvent::eType CSmAnticheatEvent::GetType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Type" );
        struct
        {
            eType* pResult;
            eType storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSmAnticheatEvent::SetType ( CSmAnticheatEvent::eType value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Type" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
