#include "StdInc.h"

namespace ManiaPlanet
{

    CXmlNod* CXmlNod::CreateInstance ()
    {
        return static_cast < CXmlNod* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CXmlAttribute> >& CXmlNod::GetAttributes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        struct
        {
            List < nodptr<class CXmlAttribute> >* pResult;
            List < nodptr<class CXmlAttribute> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CXmlNod::SetAttributes ( List < nodptr<class CXmlAttribute> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CMwNod> >& CXmlNod::GetUIChilds () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIChilds" );
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

    void CXmlNod::SetUIChilds ( List < nodptr<class CMwNod> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIChilds" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
