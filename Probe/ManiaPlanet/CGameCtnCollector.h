#pragma once

namespace ManiaPlanet
{

    class CGameCtnCollector : public CMwNod
    {
    public:
        #include "Generated/CGameCtnCollector.Generated.h"

    private:
        void*           m_pArticle;
        NodMeta         m_Meta;
        StringW         m_wstrName;
        StringW         m_wstrDescription;
        StringA         m_strDefaultSkinName;
        StringW         m_wstrPageName;
        int             m_iCatalogPosition;
        void*           m_pIconFid;
        uint            m_field4C;
        uint            m_field50;
        uint            m_bIconUseAutoRender;
        uint            m_uiIconQuarterRotationY;
        uint            m_bIsInternal;
        uint            m_field60;
        uint            m_field64;
        uint            m_field68;
    };

}
