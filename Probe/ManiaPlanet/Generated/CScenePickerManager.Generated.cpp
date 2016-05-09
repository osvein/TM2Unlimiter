#include "StdInc.h"

namespace ManiaPlanet
{

    CScenePickerManager* CScenePickerManager::CreateInstance ()
    {
        return static_cast < CScenePickerManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsPicker* CScenePickerManager::GetPicker () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Picker" );
        class CHmsPicker* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CScenePickerManager::SetPicker ( class CHmsPicker* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Picker" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
