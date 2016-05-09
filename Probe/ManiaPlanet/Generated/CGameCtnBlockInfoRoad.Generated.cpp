#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoRoad* CGameCtnBlockInfoRoad::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoRoad* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnBlockInfoSlope* CGameCtnBlockInfoRoad::GetSlope () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Slope" );
        class CGameCtnBlockInfoSlope* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnBlockInfoRoad::SetSlope ( class CGameCtnBlockInfoSlope* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Slope" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
