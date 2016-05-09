#include "StdInc.h"

namespace ManiaPlanet
{

    CSmSector* CSmSector::CreateInstance ()
    {
        return static_cast < CSmSector* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < Id >& CSmSector::GetPlayersIds () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersIds" );
        struct
        {
            Array < Id >* pResult;
            Array < Id > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSmSector::SetPlayersIds ( Array < Id >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersIds" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
