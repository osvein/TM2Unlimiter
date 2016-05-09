#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnArticleNodeDirectory* CGameCtnArticleNodeDirectory::CreateInstance ()
    {
        return static_cast < CGameCtnArticleNodeDirectory* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnArticleNode> >& CGameCtnArticleNodeDirectory::GetChildNodes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChildNodes" );
        struct
        {
            List < nodptr<class CGameCtnArticleNode> >* pResult;
            List < nodptr<class CGameCtnArticleNode> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnArticleNodeDirectory::SetChildNodes ( List < nodptr<class CGameCtnArticleNode> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChildNodes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGameCtnArticleNodeDirectory::CreateNewDirectory ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateNewDirectory" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
