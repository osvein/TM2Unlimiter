#pragma once

namespace ManiaPlanet
{

    class CMwRefBuffer : public CMwNod
    {
    public:
        #include "Generated/CMwRefBuffer.Generated.h"

        CMwNod*         GetNodById          ( Id id );
    };

}
