#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsCorpusLight* CHmsCorpusLight::CreateInstance ()
    {
        return static_cast < CHmsCorpusLight* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CHmsLight* CHmsCorpusLight::GetLight () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Light" );
        class CHmsLight* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CHmsCorpusLight::SetLight ( class CHmsLight* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Light" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
