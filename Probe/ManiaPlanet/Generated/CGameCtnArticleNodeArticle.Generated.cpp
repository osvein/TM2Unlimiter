#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnArticleNodeArticle* CGameCtnArticleNodeArticle::CreateInstance ()
    {
        return static_cast < CGameCtnArticleNodeArticle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnArticle* CGameCtnArticleNodeArticle::GetArticle () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Article" );
        class CGameCtnArticle* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnArticleNodeArticle::SetArticle ( class CGameCtnArticle* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Article" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
