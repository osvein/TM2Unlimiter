#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_EditorSettings* CGamePlayerProfileChunk_EditorSettings::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_EditorSettings* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    StringW CGamePlayerProfileChunk_EditorSettings::GetEditorSettingsName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditorSettingsName" );
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

    void CGamePlayerProfileChunk_EditorSettings::SetEditorSettingsName ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditorSettingsName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
