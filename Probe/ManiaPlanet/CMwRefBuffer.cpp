#include "StdInc.h"

namespace ManiaPlanet
{

    CMwNod* CMwRefBuffer::GetNodById ( Id id )
    {
        List < nodptr<CMwNod> >& nods = GetNods ();
        for ( auto it = nods.Begin (); it != nods.End (); ++it )
        {
            if ( (*it)->GetNodMeta ()->m_idUid == id )
                return *it;
        }
        return NULL;
    }

}
