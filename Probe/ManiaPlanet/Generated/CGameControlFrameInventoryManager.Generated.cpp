#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlFrameInventoryManager* CGameControlFrameInventoryManager::CreateInstance ()
    {
        return static_cast < CGameControlFrameInventoryManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CControlToolTipManager* CGameControlFrameInventoryManager::GetToolTipManager () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ToolTipManager" );
        class CControlToolTipManager* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlFrameInventoryManager::SetToolTipManager ( class CControlToolTipManager* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ToolTipManager" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
