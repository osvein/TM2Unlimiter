#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneGlobalMgrAnim* CSceneGlobalMgrAnim::CreateInstance ()
    {
        return static_cast < CSceneGlobalMgrAnim* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CMwNod> >& CSceneGlobalMgrAnim::GetSkelBinding () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SkelBinding" );
        struct
        {
            List < nodptr<class CMwNod> >* pResult;
            List < nodptr<class CMwNod> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSceneGlobalMgrAnim::SetSkelBinding ( List < nodptr<class CMwNod> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SkelBinding" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
