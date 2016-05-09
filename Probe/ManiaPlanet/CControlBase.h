#pragma once

namespace ManiaPlanet
{

    class CControlContainer;

    class CControlBase : public CSceneToy
    {
    public:
        #include "Generated/CControlBase.Generated.h"

        Vec2D                       GetSize                 () const
        {
            return -GetBoxMin ();
        }

        void                        SetSize                 ( Vec2D vecSize )
        {
            SetBoxMin ( -vecSize );
        }

        delegate < void () >        GetAction               ();
        void                        SetAction               ( delegate < void () > action );

    private:
        void                        ExecuteAction           ();

        CControlContainer*          m_pParent;
        void*                       m_pUiElement;
        void*                       m_pFastCall;
        uint                        m_field7C;
        uint                        m_field80;
        uint                        m_field84;
        uint                        m_field88;
        uint                        m_field8C;
        uint                        m_field90;
        CControlLayout*             m_pLayout;
        uint                        m_field98;
        Rectangle                   m_Size;
        uint                        m_fieldB4;
        uint                        m_fieldB8;
        uint                        m_fieldBC;
        uint                        m_fieldC0;
        uint                        m_fieldC4;
        uint                        m_fieldC8;
        uint                        m_fieldCC;
        uint                        m_fieldD0;
        uint                        m_fieldD4;
        uint                        m_fieldD8;
        CMwNod*                     m_pNod;
        CMwStack                    m_ActionMethodStack;
        StringA                     m_strStackText;
        uint                        m_field104;
        uint                        m_uiFlags;
        StringW                     m_wstrTooltip;
        uint                        m_field114;
        uint                        m_field118;
        StyleRef                    m_StyleRef;
        uint                        m_field124;
        uint                        m_field128;
        uint                        m_field12C;
        uint                        m_field130;

        static std::map < CMwNod*, delegate < void () > > ms_Actions;
    };

}
