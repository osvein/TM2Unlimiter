#include "StdInc.h"

namespace ManiaPlanet
{

    CControlBase* CControlContainer::GetChildById ( Id id ) const
    {
        Array < CControlBase* >& children = GetChilds ();
        for ( auto it = children.Begin (); it != children.End (); it++ )
        {
            if ( (*it)->GetNodMeta ()->m_idUid == id )
                return *it;
        }
        return NULL;
    }

    CControlQuad* CControlContainer::AddQuad ( const char* pszId, Id idIcon, Vec3D vecPos, Vec2D vecSize, CControlStyle* pStyle )
    {
        CControlQuad* pQuad = nod_cast < CControlQuad* > ( AddControl (
            pszId,
            vecPos,
            "",
            NULL,
            "",
            "Quad",
            pStyle
        ) );
        if ( !pQuad )
            return NULL;

        pQuad->SetIconId ( idIcon );
        pQuad->SetSize ( vecSize );
        return pQuad;
    }

    CControlButton* CControlContainer::AddButton ( const char* pszId, const wchar_t* pwszLabel, const wchar_t* pwszTooltip, delegate < void () > action, Vec3D vecPos, Vec2D vecSize, CControlStyle* pStyle )
    {
        CControlButton* pButton = nod_cast < CControlButton* > ( AddControl (
            pszId,
            vecPos,
            "",
            NULL,
            "",
            "Button",
            pStyle
        ) );
        if ( !pButton )
            return NULL;

        pButton->SetLabel ( pwszLabel );
        pButton->SetToolTip ( pwszTooltip );
        pButton->SetSize ( vecSize );
        pButton->SetAction ( action );
        return pButton;
    }

}
