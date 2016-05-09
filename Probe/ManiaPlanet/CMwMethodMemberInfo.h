#pragma once

namespace ManiaPlanet
{

    class CMwMethodMemberInfo : public CMwMemberInfo
    {
    public:
                            CMwMethodMemberInfo ()
        {
            memset ( this, 0, sizeof(*this) );
        }

                            CMwMethodMemberInfo ( uint uiID, void (*pMethod)() )
            : CMwMemberInfo ( uiID, CMwMemberInfo::ACTION, 2 )
        {
            Init ( pMethod );
        }

        template < class T >
                            CMwMethodMemberInfo ( uint uiID, void (T::*pMethod)() )
            : CMwMemberInfo ( uiID, CMwMemberInfo::ACTION, 2 )
        {
            Init ( union_cast < void (T::*)(), void (*)() > ( pMethod ) );
        }

        void*               GetMethod           () const        { return m_pMethod; }

    private:
        void                Init                ( void (*pMethod)() )
        {
            m_pMethod = pMethod;
            m_uiNumArgs = 0;
            m_pArgClassIDs = NULL;
            m_ppszArgNames = NULL;
            m_pArgFlags = NULL;
        }

        void*               m_pMethod;
        uint                m_uiNumArgs;
        uint*               m_pArgClassIDs;
        const char**        m_ppszArgNames;
        uint*               m_pArgFlags;
    };

}
