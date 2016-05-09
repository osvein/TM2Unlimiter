#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnCatalog* CGameCtnCatalog::CreateInstance ()
    {
        return static_cast < CGameCtnCatalog* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnChapter> >& CGameCtnCatalog::GetChapters () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Chapters" );
        struct
        {
            List < nodptr<class CGameCtnChapter> >* pResult;
            List < nodptr<class CGameCtnChapter> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnCatalog::SetChapters ( List < nodptr<class CGameCtnChapter> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Chapters" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
