#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockManialink* CGameCtnMediaBlockManialink::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockManialink* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    StringW CGameCtnMediaBlockManialink::GetManialinkURL () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkURL" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnMediaBlockManialink::SetManialinkURL ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkURL" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
