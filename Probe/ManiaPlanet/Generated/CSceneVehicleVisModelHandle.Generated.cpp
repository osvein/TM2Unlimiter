#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneVehicleVisModelHandle* CSceneVehicleVisModelHandle::CreateInstance ()
    {
        return static_cast < CSceneVehicleVisModelHandle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CMwNod* CSceneVehicleVisModelHandle::GetModel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        class CMwNod* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSceneVehicleVisModelHandle::SetModel ( class CMwNod* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Model" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
