#include "StdInc.h"

namespace ManiaPlanet
{

    CMwNod* CSystemFid::GetCreateNod ()
    {
        CMwNod* pNod = GetNod ();
        if ( pNod )
            return pNod;

        typedef void (CreateNodFromFid_t)(CMwNod** ppNod, CSystemFid* pFid, uint uiFlags);
        ((CreateNodFromFid_t *)Address::Inst.CreateNodFromFid) ( &pNod, this, 7 );
        return pNod;
    }

}
