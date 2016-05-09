#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaClipGroup* CGameCtnMediaClipGroup::CreateInstance ()
    {
        return static_cast < CGameCtnMediaClipGroup* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnMediaClip> >& CGameCtnMediaClipGroup::GetClips () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Clips" );
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

    void CGameCtnMediaClipGroup::SetClips ( List < nodptr<class CGameCtnMediaClip> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Clips" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
