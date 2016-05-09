#pragma once

namespace ManiaPlanet
{

    class CMwEngine : public CMwNod
    {
    public:
        #include "Generated/CMwEngine.Generated.h"

        enum eEngine
        {
            ENGINE_FOUNDATIONS      = 0x01,
            ENGINE_GAME             = 0x03,
            ENGINE_GRAPHIC          = 0x04,
            ENGINE_FUNCTION         = 0x05,
            ENGINE_HMS              = 0x06,
            ENGINE_CONTROL          = 0x07,
            ENGINE_MOTION           = 0x08,
            ENGINE_PLUG             = 0x09,
            ENGINE_SCENE            = 0x0A,
            ENGINE_SYSTEM           = 0x0B,
            ENGINE_VISION           = 0x0C,
            ENGINE_AUDIO            = 0x10,
            ENGINE_SCRIPT           = 0x11,
            ENGINE_NET              = 0x12,
            ENGINE_INPUT            = 0x13,
            ENGINE_XML              = 0x14,
            ENGINE_TRACKMANIA       = 0x24,
            ENGINE_QUESTMANIA       = 0x2C,
            ENGINE_SHOOTMANIA       = 0x2D
        };
    };

}
