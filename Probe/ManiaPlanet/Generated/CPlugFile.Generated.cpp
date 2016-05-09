#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFile* CPlugFile::CreateInstance ()
    {
        return static_cast < CPlugFile* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CPlugFile::ReGenerate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ReGenerate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
