#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoVariantAir* CGameCtnBlockInfoVariantAir::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoVariantAir* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnBlockInfo* CGameCtnBlockInfoVariantAir::GetPillarsForCompatibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarsForCompatibility" );
        class CGameCtnBlockInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfoVariantAir::SetPillarsForCompatibility ( class CGameCtnBlockInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PillarsForCompatibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
