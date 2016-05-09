#pragma once

namespace ManiaPlanet
{

    class CGameCtnBlockInfo : public CGameCtnCollector
    {
    public:
        #include "Generated/CGameCtnBlockInfo.Generated.h"

        CGameCtnBlockInfoVariant*       GetVariant          ( bool bGround, int iVariantIdx );

        CGameCtnBlockInfoVariant*       GetVariantWithUnits ( bool bDefaultGround, int iDefaultVariant );

    private:
    };

}
