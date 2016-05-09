#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCameraEffectGroup* CGameControlCameraEffectGroup::CreateInstance ()
    {
        return static_cast < CGameControlCameraEffectGroup* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameControlCameraEffect> >& CGameControlCameraEffectGroup::GetEffects () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effects" );
        struct
        {
            List < nodptr<class CGameControlCameraEffect> >* pResult;
            List < nodptr<class CGameControlCameraEffect> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlCameraEffectGroup::SetEffects ( List < nodptr<class CGameControlCameraEffect> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Effects" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
