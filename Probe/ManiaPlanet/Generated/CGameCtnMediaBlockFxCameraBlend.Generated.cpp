#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxCameraBlend* CGameCtnMediaBlockFxCameraBlend::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxCameraBlend* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    float CGameCtnMediaBlockFxCameraBlend::GetIntensity () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Intensity" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnMediaBlockFxCameraBlend::SetIntensity ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Intensity" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
