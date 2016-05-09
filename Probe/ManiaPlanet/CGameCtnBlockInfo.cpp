#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoVariant* CGameCtnBlockInfo::GetVariant ( bool bGround, int iVariantIdx )
    {
        if ( bGround )
        {
            if ( iVariantIdx < 0 || iVariantIdx - 1 >= GetAdditionalVariantsGround ().Size () )
                iVariantIdx = 0;

            if ( iVariantIdx == 0 )
                return GetVariantBaseGround ();
            else
                return GetAdditionalVariantsGround () [ iVariantIdx - 1 ];
        }
        else
        {
            return GetVariantBaseAir ();
        }
    }

    CGameCtnBlockInfoVariant* CGameCtnBlockInfo::GetVariantWithUnits ( bool bDefaultGround, int iDefaultVariant )
    {
        CGameCtnBlockInfoVariant* pVariant = GetVariant ( bDefaultGround, iDefaultVariant );
        if ( pVariant->GetBlockUnitInfos ().Size () > 0 )
            return pVariant;

        return GetVariant ( !bDefaultGround, iDefaultVariant );
    }

}
