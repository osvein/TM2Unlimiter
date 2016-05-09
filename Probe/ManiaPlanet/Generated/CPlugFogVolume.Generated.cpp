#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFogVolume* CPlugFogVolume::CreateInstance ()
    {
        return static_cast < CPlugFogVolume* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugFogMatter* CPlugFogVolume::GetMatter () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Matter" );
        class CPlugFogMatter* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugFogVolume::SetMatter ( class CPlugFogMatter* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Matter" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
