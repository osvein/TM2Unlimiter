#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTriangles3D* CGameCtnMediaBlockTriangles3D::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTriangles3D* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
