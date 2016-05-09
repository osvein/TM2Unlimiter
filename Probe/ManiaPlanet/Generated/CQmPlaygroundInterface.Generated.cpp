#include "StdInc.h"

namespace ManiaPlanet
{

    CQmPlaygroundInterface* CQmPlaygroundInterface::CreateInstance ()
    {
        return static_cast < CQmPlaygroundInterface* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CQmPlaygroundInterface::PlayedCardAlignToString ( ePlayedCardAlign value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PlayedCardAlign" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CQmPlaygroundInterface::ePlayedCardAlign CQmPlaygroundInterface::ParsePlayedCardAlign ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "PlayedCardAlign" );
        return (ePlayedCardAlign)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    List < nodptr<class CQmPlaygroundActorInterface> >& CQmPlaygroundInterface::GetActorsInterfaces () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActorsInterfaces" );
        struct
        {
            List < nodptr<class CQmPlaygroundActorInterface> >* pResult;
            List < nodptr<class CQmPlaygroundActorInterface> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundInterface::SetActorsInterfaces ( List < nodptr<class CQmPlaygroundActorInterface> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActorsInterfaces" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CQmControlCardsStackAnimated> >& CQmPlaygroundInterface::GetCardsStacks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardsStacks" );
        struct
        {
            List < nodptr<class CQmControlCardsStackAnimated> >* pResult;
            List < nodptr<class CQmControlCardsStackAnimated> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundInterface::SetCardsStacks ( List < nodptr<class CQmControlCardsStackAnimated> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CardsStacks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CControlLabel> >& CQmPlaygroundInterface::GetCounters () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Counters" );
        struct
        {
            List < nodptr<class CControlLabel> >* pResult;
            List < nodptr<class CControlLabel> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundInterface::SetCounters ( List < nodptr<class CControlLabel> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Counters" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CSceneMobil* CQmPlaygroundInterface::GetEffectsMobil () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EffectsMobil" );
        class CSceneMobil* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmPlaygroundInterface::SetEffectsMobil ( class CSceneMobil* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EffectsMobil" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CQmControlGaugeAnimated> >& CQmPlaygroundInterface::GetGauges () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Gauges" );
        struct
        {
            List < nodptr<class CQmControlGaugeAnimated> >* pResult;
            List < nodptr<class CQmControlGaugeAnimated> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundInterface::SetGauges ( List < nodptr<class CQmControlGaugeAnimated> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Gauges" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CQmPlaygroundInterface::ePlayedCardAlign CQmPlaygroundInterface::GetPlayedCardAlign () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayedCardAlign" );
        struct
        {
            ePlayedCardAlign* pResult;
            ePlayedCardAlign storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmPlaygroundInterface::SetPlayedCardAlign ( CQmPlaygroundInterface::ePlayedCardAlign value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayedCardAlign" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CSceneMobil* CQmPlaygroundInterface::GetScreenFadeMobil () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeMobil" );
        class CSceneMobil* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmPlaygroundInterface::SetScreenFadeMobil ( class CSceneMobil* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeMobil" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CScene2d* CQmPlaygroundInterface::GetScreenFadeOverlay () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeOverlay" );
        class CScene2d* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmPlaygroundInterface::SetScreenFadeOverlay ( class CScene2d* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeOverlay" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    void CQmPlaygroundInterface::HidePlayedCard ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HidePlayedCard" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CQmPlaygroundInterface::ScreenFadeIn ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeIn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CQmPlaygroundInterface::ScreenFadeOut ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenFadeOut" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CQmPlaygroundInterface::ShowPlayedCard ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowPlayedCard" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
