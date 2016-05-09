#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundUIConfigMgr* CGamePlaygroundUIConfigMgr::CreateInstance ()
    {
        return static_cast < CGamePlaygroundUIConfigMgr* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGamePlaygroundUIConfig* CGamePlaygroundUIConfigMgr::GetLocalPlayerConfig () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalPlayerConfig" );
        class CGamePlaygroundUIConfig* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlaygroundUIConfigMgr::SetLocalPlayerConfig ( class CGamePlaygroundUIConfig* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalPlayerConfig" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CGamePlaygroundUIConfig> >& CGamePlaygroundUIConfigMgr::GetUI () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UI" );
        struct
        {
            List < nodptr<class CGamePlaygroundUIConfig> >* pResult;
            List < nodptr<class CGamePlaygroundUIConfig> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfigMgr::SetUI ( List < nodptr<class CGamePlaygroundUIConfig> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UI" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePlaygroundUIConfig* CGamePlaygroundUIConfigMgr::GetUIAll () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIAll" );
        class CGamePlaygroundUIConfig* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGamePlaygroundUIConfigMgr::SetUIAll ( class CGamePlaygroundUIConfig* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CGamePlaygroundUILayer> >& CGamePlaygroundUIConfigMgr::GetUILayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        struct
        {
            List < nodptr<class CGamePlaygroundUILayer> >* pResult;
            List < nodptr<class CGamePlaygroundUILayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfigMgr::SetUILayers ( List < nodptr<class CGamePlaygroundUILayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGamePlaygroundUIConfig* CGamePlaygroundUIConfigMgr::GetUI ( class CGamePlayer* pPlayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetUI" );
        class CGamePlaygroundUIConfig* pUI = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pUI ) );
        CallMethod ( &stack, NULL );
        return pUI;
    }

    void CGamePlaygroundUIConfigMgr::ResetAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ResetAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    class CGamePlaygroundUILayer* CGamePlaygroundUIConfigMgr::UILayerCreate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerCreate" );
        class CGamePlaygroundUILayer* pLayer = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        CallMethod ( &stack, NULL );
        return pLayer;
    }

    void CGamePlaygroundUIConfigMgr::UILayerDestroy ( class CGamePlaygroundUILayer* pLayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerDestroy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        CallMethod ( &stack, NULL );
    }

    void CGamePlaygroundUIConfigMgr::UILayerDestroyAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayerDestroyAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
