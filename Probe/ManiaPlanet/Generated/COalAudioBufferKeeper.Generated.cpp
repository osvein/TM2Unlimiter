#include "StdInc.h"

namespace ManiaPlanet
{

    COalAudioBufferKeeper* COalAudioBufferKeeper::CreateInstance ()
    {
        return static_cast < COalAudioBufferKeeper* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint COalAudioBufferKeeper::GetNbUses () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbUses" );
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

    void COalAudioBufferKeeper::SetNbUses ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbUses" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
