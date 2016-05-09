#include "StdInc.h"

namespace ManiaPlanet
{

    CQmBoard* CQmBoard::CreateInstance ()
    {
        return static_cast < CQmBoard* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CQmBoardSquare> >& CQmBoard::GetSquares () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Squares" );
        struct
        {
            List < nodptr<class CQmBoardSquare> >* pResult;
            List < nodptr<class CQmBoardSquare> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmBoard::SetSquares ( List < nodptr<class CQmBoardSquare> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Squares" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
