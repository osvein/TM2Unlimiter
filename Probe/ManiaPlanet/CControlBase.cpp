#include "StdInc.h"

namespace ManiaPlanet
{

    std::map < CMwNod*, delegate < void () > > CControlBase::ms_Actions;

    delegate < void () > CControlBase::GetAction ()
    {
        auto it = ms_Actions.find ( this );
        if ( it == ms_Actions.end () )
            return delegate < void () > ();

        return it->second;
    }

    void CControlBase::SetAction ( delegate < void () > action )
    {
        static CMwMethodMemberInfo methodInfo ( CLASSID, &CControlBase::ExecuteAction );
        
        SetNod ( this );
        m_ActionMethodStack.Clear ();
        m_ActionMethodStack.SetTopIndex ( 0 );
        m_ActionMethodStack.Push ( &methodInfo );

        ms_Actions [ this ] = action;
    }

    void CControlBase::ExecuteAction ()
    {
        ms_Actions [ this ] ();
    }

}
