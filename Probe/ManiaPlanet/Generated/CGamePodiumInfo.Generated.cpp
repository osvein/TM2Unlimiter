#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePodiumInfo* CGamePodiumInfo::CreateInstance ()
    {
        return static_cast < CGamePodiumInfo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnMediaClip> >& CGamePodiumInfo::GetMediaClipFids () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaClipFids" );
        struct
        {
            List < nodptr<class CGameCtnMediaClip> >* pResult;
            List < nodptr<class CGameCtnMediaClip> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePodiumInfo::SetMediaClipFids ( List < nodptr<class CGameCtnMediaClip> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MediaClipFids" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
