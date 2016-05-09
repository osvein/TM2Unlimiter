#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncShaders* CFuncShaders::CreateInstance ()
    {
        return static_cast < CFuncShaders* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < class CFuncShader* >& CFuncShaders::GetFuncShaders () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncShaders" );
        struct
        {
            Array < class CFuncShader* >* pResult;
            Array < class CFuncShader* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CFuncShaders::SetFuncShaders ( Array < class CFuncShader* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncShaders" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
