#include "StdInc.h"

namespace ManiaPlanet
{

    CTmRaceInterfaceManialinkScripHandler* CTmRaceInterfaceManialinkScripHandler::CreateInstance ()
    {
        return static_cast < CTmRaceInterfaceManialinkScripHandler* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CTrackManiaPlayer* CTmRaceInterfaceManialinkScripHandler::GetGUIPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GUIPlayer" );
        class CTrackManiaPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTmRaceInterfaceManialinkScripHandler::SetGUIPlayer ( class CTrackManiaPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GUIPlayer" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CTrackManiaPlayer* CTmRaceInterfaceManialinkScripHandler::GetInputPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InputPlayer" );
        class CTrackManiaPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CTmRaceInterfaceManialinkScripHandler::SetInputPlayer ( class CTrackManiaPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "InputPlayer" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CTrackManiaPlayer> >& CTmRaceInterfaceManialinkScripHandler::GetPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        struct
        {
            List < nodptr<class CTrackManiaPlayer> >* pResult;
            List < nodptr<class CTrackManiaPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTmRaceInterfaceManialinkScripHandler::SetPlayers ( List < nodptr<class CTrackManiaPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
