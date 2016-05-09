#pragma once

namespace ManiaPlanet
{

    class CControlStyleSheet : public CPlug
    {
    public:
        #include "Generated/CControlStyleSheet.Generated.h"

        CControlStyle*          GetStyle        ( Id id )
        {
            return nod_cast < CControlStyle* > ( GetBuffer ()->GetNodById ( id ) );
        }
    };

}
