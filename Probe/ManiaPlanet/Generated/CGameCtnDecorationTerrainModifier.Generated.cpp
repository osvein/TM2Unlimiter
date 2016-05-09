#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnDecorationTerrainModifier* CGameCtnDecorationTerrainModifier::CreateInstance ()
    {
        return static_cast < CGameCtnDecorationTerrainModifier* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Id CGameCtnDecorationTerrainModifier::GetIdName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IdName" );
        struct
        {
            Id* pResult;
            Id storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnDecorationTerrainModifier::SetIdName ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IdName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CSystemFidsFolder* CGameCtnDecorationTerrainModifier::GetRemapFolder () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemapFolder" );
        class CSystemFidsFolder* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationTerrainModifier::SetRemapFolder ( class CSystemFidsFolder* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemapFolder" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameSkin* CGameCtnDecorationTerrainModifier::GetRemapping () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Remapping" );
        class CGameSkin* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnDecorationTerrainModifier::SetRemapping ( class CGameSkin* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Remapping" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
