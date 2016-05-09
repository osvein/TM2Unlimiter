#pragma once

namespace ManiaPlanet
{

    class CScene : public CMwNod
    {
    public:
        #include "Generated/CScene.Generated.h"

        CSceneMobil*            GetMobilById            ( Id id );
        CControlFrameStyled*    GetInterfaceRoot        ();
    };

}
