#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugDecoratorSolid* CPlugDecoratorSolid::CreateInstance ()
    {
        return static_cast < CPlugDecoratorSolid* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CPlugDecoratorTree> >& CPlugDecoratorSolid::GetTreeDecorators () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TreeDecorators" );
        struct
        {
            List < nodptr<class CPlugDecoratorTree> >* pResult;
            List < nodptr<class CPlugDecoratorTree> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugDecoratorSolid::SetTreeDecorators ( List < nodptr<class CPlugDecoratorTree> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TreeDecorators" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
