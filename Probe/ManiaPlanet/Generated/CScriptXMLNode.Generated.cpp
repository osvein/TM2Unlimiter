#include "StdInc.h"

namespace ManiaPlanet
{

    CScriptXMLNode* CScriptXMLNode::CreateInstance ()
    {
        return static_cast < CScriptXMLNode* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CScriptXMLNode> >& CScriptXMLNode::GetChildren () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Children" );
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

    void CScriptXMLNode::SetChildren ( List < nodptr<class CScriptXMLNode> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Children" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CScriptXMLNode::GetName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Name" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptXMLNode::SetName ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Name" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CScriptXMLNode::GetTextContents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TextContents" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScriptXMLNode::SetTextContents ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TextContents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CScriptXMLNode::GetAttributeBoolean ( StringW wstrName, bool bDefaultValue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetAttributeBoolean" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( bDefaultValue );
        stack.Push ( wstrName );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

    int CScriptXMLNode::GetAttributeInteger ( StringW wstrName, int iDefaultValue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetAttributeInteger" );
        int iResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iDefaultValue );
        stack.Push ( wstrName );
        stack.Push ( iResult );
        CallMethod ( &stack, NULL );
        return iResult;
    }

    float CScriptXMLNode::GetAttributeReal ( StringW wstrName, float fDefaultValue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetAttributeReal" );
        float fResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fDefaultValue );
        stack.Push ( wstrName );
        stack.Push ( fResult );
        CallMethod ( &stack, NULL );
        return fResult;
    }

    StringW CScriptXMLNode::GetAttributeText ( StringW wstrName, StringW wstrDefaultValue )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetAttributeText" );
        StringW wstrResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrDefaultValue );
        stack.Push ( wstrName );
        stack.Push ( wstrResult );
        CallMethod ( &stack, NULL );
        return wstrResult;
    }

    class CScriptXMLNode* CScriptXMLNode::GetFirstChild ( StringA strName )
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
