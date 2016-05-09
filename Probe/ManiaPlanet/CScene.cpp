#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMobil* CScene::GetMobilById ( Id id )
    {
        List < nodptr<CSceneMobil> >& mobils = GetMobils ();
        for ( auto it = mobils.Begin (); it != mobils.End (); it++ )
        {
            if ( (*it)->GetNodMeta ()->m_idUid == id )
                return *it;
        }
        return NULL;
    }

    CControlFrameStyled* CScene::GetInterfaceRoot ()
    {
        return nod_cast < CControlFrameStyled* > ( GetMobilById ( "InterfaceRoot" ) );
    }

}
