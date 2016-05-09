#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTriangles2D* CGameCtnMediaBlockTriangles2D::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTriangles2D* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
