#pragma once

namespace ManiaPlanet
{

    class CControlQuad;

    class CControlContainer : public CControlBase
    {
    public:
        #include "Generated/CControlContainer.Generated.h"

        CControlBase*               GetChildById        ( Id id ) const;

        CControlQuad*               AddQuad             ( const char* pszId, Id idIcon, Vec3D vecPos, Vec2D vecSize, CControlStyle* pStyle );

        CControlButton*             AddButton           ( const char* pszId, const wchar_t* pwszLabel, const wchar_t* pwszTooltip, delegate < void () > action, Vec3D vecPos, Vec2D vecSize, CControlStyle* pStyle );
    };

}
