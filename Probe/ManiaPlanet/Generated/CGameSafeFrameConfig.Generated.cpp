#include "StdInc.h"

namespace ManiaPlanet
{

    CGameSafeFrameConfig* CGameSafeFrameConfig::CreateInstance ()
    {
        return static_cast < CGameSafeFrameConfig* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Vec4D CGameSafeFrameConfig::GetColor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Color" );
        struct
        {
            Vec4D* pResult;
            Vec4D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameSafeFrameConfig::SetColor ( Vec4D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Color" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec4D CGameSafeFrameConfig::GetLinesColor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LinesColor" );
        struct
        {
            Vec4D* pResult;
            Vec4D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameSafeFrameConfig::SetLinesColor ( Vec4D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LinesColor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
