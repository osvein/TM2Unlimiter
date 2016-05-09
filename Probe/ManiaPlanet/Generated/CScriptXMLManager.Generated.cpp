#include "StdInc.h"

namespace ManiaPlanet
{

    CScriptXMLManager* CScriptXMLManager::CreateInstance ()
    {
        return static_cast < CScriptXMLManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CScriptXMLDocument> >& CScriptXMLManager::GetDocuments () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Documents" );
        struct
        {
            List < nodptr<class CScriptXMLDocument> >* pResult;
            List < nodptr<class CScriptXMLDocument> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptXMLManager::SetDocuments ( List < nodptr<class CScriptXMLDocument> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Documents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScriptXMLDocument* CScriptXMLManager::Create ( StringA strContents )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Create" );
        class CScriptXMLDocument* pDocument = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strContents );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pDocument ) );
        CallMethod ( &stack, NULL );
        return pDocument;
    }

    void CScriptXMLManager::Destroy ( class CScriptXMLDocument* pDocument )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Destroy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pDocument ) );
        CallMethod ( &stack, NULL );
    }

}
