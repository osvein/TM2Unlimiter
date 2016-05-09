#include "StdInc.h"

namespace ManiaPlanet
{

    CControlMediaPlayer* CControlMediaPlayer::CreateInstance ()
    {
        return static_cast < CControlMediaPlayer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugFileSnd* CControlMediaPlayer::GetMediaAudio () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaAudio" );
        class CPlugFileSnd* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlMediaPlayer::SetMediaAudio ( class CPlugFileSnd* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaAudio" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVideo* CControlMediaPlayer::GetMediaVideo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaVideo" );
        class CPlugFileVideo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlMediaPlayer::SetMediaVideo ( class CPlugFileVideo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaVideo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
