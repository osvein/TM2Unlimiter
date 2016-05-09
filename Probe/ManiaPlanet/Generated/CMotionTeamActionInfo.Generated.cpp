#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionTeamActionInfo* CMotionTeamActionInfo::CreateInstance ()
    {
        return static_cast < CMotionTeamActionInfo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CMotionTeamActionInfo::AnimAtDestToString ( eAnimAtDest value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AnimAtDest" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CMotionTeamActionInfo::eAnimAtDest CMotionTeamActionInfo::ParseAnimAtDest ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AnimAtDest" );
        return (eAnimAtDest)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CMotionTeamActionInfo::DestinationToString ( eDestination value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Destination" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CMotionTeamActionInfo::eDestination CMotionTeamActionInfo::ParseDestination ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Destination" );
        return (eDestination)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CMotionTeamActionInfo::TeamMateNameToString ( eTeamMateName value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TeamMateName" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CMotionTeamActionInfo::eTeamMateName CMotionTeamActionInfo::ParseTeamMateName ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "TeamMateName" );
        return (eTeamMateName)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CMotionTeamActionInfo::eAnimAtDest CMotionTeamActionInfo::GetAnimAtDest () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimAtDest" );
        struct
        {
            eAnimAtDest* pResult;
            eAnimAtDest storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotionTeamActionInfo::SetAnimAtDest ( CMotionTeamActionInfo::eAnimAtDest value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimAtDest" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CMotionTeamActionInfo::GetAnimAtDestDuration () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimAtDestDuration" );
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

    void CMotionTeamActionInfo::SetAnimAtDestDuration ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimAtDestDuration" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CMotionTeamActionInfo::eDestination CMotionTeamActionInfo::GetDestination () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Destination" );
        struct
        {
            eDestination* pResult;
            eDestination storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotionTeamActionInfo::SetDestination ( CMotionTeamActionInfo::eDestination value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Destination" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CMotionTeamActionInfo::eTeamMateName CMotionTeamActionInfo::GetTeamMateName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateName" );
        struct
        {
            eTeamMateName* pResult;
            eTeamMateName storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotionTeamActionInfo::SetTeamMateName ( CMotionTeamActionInfo::eTeamMateName value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CMotionTeamActionInfo::GetTeamMateSpeed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateSpeed" );
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

    void CMotionTeamActionInfo::SetTeamMateSpeed ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateSpeed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
