#include "StdInc.h"

namespace ManiaPlanet
{

    CScriptXMLDocument* CScriptXMLDocument::CreateInstance ()
    {
        return static_cast < CScriptXMLDocument* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CScriptXMLNode> >& CScriptXMLDocument::GetNodes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Nodes" );
        struct
        {
            List < nodptr<class CScriptXMLNode> >* pResult;
            List < nodptr<class CScriptXMLNode> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptXMLDocument::SetNodes ( List < nodptr<class CScriptXMLNode> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Nodes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScriptXMLNode* CScriptXMLDocument::GetRoot () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Root" );
        class CScriptXMLNode* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CScriptXMLDocument::SetRoot ( class CScriptXMLNode* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Root" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    StringA CScriptXMLDocument::GetTextContents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TextContents" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptXMLDocument::SetTextContents ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TextContents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScriptXMLNode* CScriptXMLDocument::GetFirstChild ( StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetFirstChild" );
        class CScriptXMLNode* pNode = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pNode ) );
        CallMethod ( &stack, NULL );
        return pNode;
    }

}
