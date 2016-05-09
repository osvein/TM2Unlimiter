#include "StdInc.h"

namespace ManiaPlanet
{

    CControlDisplayGraph* CControlDisplayGraph::CreateInstance ()
    {
        return static_cast < CControlDisplayGraph* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    void CControlDisplayGraph::AddAutoVal ( class CMwNod* pNod, StringA strParam, uint uiDisplayMode, Vec3D vecColor, float fMinRange, float fMaxRange )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddAutoVal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fMaxRange );
        stack.Push ( fMinRange );
        stack.Push ( vecColor );
        stack.Push ( uiDisplayMode );
        stack.Push ( strParam );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pNod ) );
        CallMethod ( &stack, NULL );
    }

    void CControlDisplayGraph::AddConstant ( float fValue, Vec3D vecColor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddConstant" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecColor );
        stack.Push ( fValue );
        CallMethod ( &stack, NULL );
    }

}
