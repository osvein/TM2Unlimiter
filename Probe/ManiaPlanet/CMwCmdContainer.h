#pragma once

namespace ManiaPlanet
{

    class CMwCmdContainer : public CMwNod
    {
    public:
        #include "Generated/CMwCmdContainer.Generated.h"

    private:
        List < void* >          m_field18;
        uint                    m_field24;
    };

}
