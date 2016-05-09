#include "StdInc.h"

namespace ManiaPlanet
{

    std::wstring color::ToString ()
    {
        return StringUtil::Format (
            L"#%02X%02X%02X%02X",
            (uint)(R * 255),
            (uint)(G * 255),
            (uint)(B * 255),
            (uint)(A * 255)
        );
    }

}
