#pragma once

namespace ManiaPlanet
{

    class CSystemFidFile : public CSystemFid
    {
    public:
        #include "Generated/CSystemFidFile.Generated.h"

        CSystemFidsFolder*  GetFolder           ()          { return nod_cast < CSystemFidsFolder* > ( m_pFolder ); }

    private:
        StringW             m_wstrName;
        uint                m_field7C;
        uint                m_uiSizeLow;
        uint                m_uiSizeHigh;
    };

}
