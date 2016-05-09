#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRaceNetLaps* CTrackManiaRaceNetLaps::CreateInstance ()
    {
        return static_cast < CTrackManiaRaceNetLaps* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CTrackManiaRaceNetLaps::ComputeScores ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ComputeScores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
