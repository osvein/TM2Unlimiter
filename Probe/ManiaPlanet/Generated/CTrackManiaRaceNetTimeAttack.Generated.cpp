#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRaceNetTimeAttack* CTrackManiaRaceNetTimeAttack::CreateInstance ()
    {
        return static_cast < CTrackManiaRaceNetTimeAttack* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CTrackManiaRaceNetTimeAttack::GetBidon () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Bidon" );
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

    void CTrackManiaRaceNetTimeAttack::SetBidon ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Bidon" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
