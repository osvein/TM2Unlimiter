#include "StdInc.h"

namespace ManiaPlanet
{

    CControlContainer* CControlContainer::CreateInstance ()
    {
        return static_cast < CControlContainer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    bool CControlContainer::GetAcceptOwnControls () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AcceptOwnControls" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlContainer::SetAcceptOwnControls ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AcceptOwnControls" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CControlBase* >& CControlContainer::GetChilds () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Childs" );
        struct
        {
            Array < class CControlBase* >* pResult;
            Array < class CControlBase* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlContainer::SetChilds ( Array < class CControlBase* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Childs" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CMwCmdBlockMain* CControlContainer::GetCreateScript () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateScript" );
        class CMwCmdBlockMain* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CControlContainer::SetCreateScript ( class CMwCmdBlockMain* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateScript" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CControlContainer::GetUseScript () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UseScript" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlContainer::SetUseScript ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UseScript" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CControlButton* CControlContainer::AddButtonScript ( StringA strId, Vec3D vecPosition, StringA strLabel, class CMwCmdBlockMain* pScript, class CControlStyle* pStyle )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddButtonScript" );
        class CControlButton* pControl = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pStyle ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pScript ) );
        stack.Push ( strLabel );
        stack.Push ( vecPosition );
        stack.Push ( strId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pControl ) );
        CallMethod ( &stack, NULL );
        return pControl;
    }

    class CControlBase* CControlContainer::AddControl ( StringA strId, Vec3D vecPosition, StringA strLabel, class CMwNod* pNod, StringA strStack, StringA strType, class CControlStyle* pStyle )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddControl" );
        class CControlBase* pControl = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pStyle ) );
        stack.Push ( strType );
        stack.Push ( strStack );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pNod ) );
        stack.Push ( strLabel );
        stack.Push ( vecPosition );
        stack.Push ( strId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pControl ) );
        CallMethod ( &stack, NULL );
        return pControl;
    }

    class CControlBase* CControlContainer::AddInstance ( class CControlBase* pModel, StringA strId, Vec3D vecPosition )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddInstance" );
        class CControlBase* pControl = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecPosition );
        stack.Push ( strId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pModel ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pControl ) );
        CallMethod ( &stack, NULL );
        return pControl;
    }

    class CControlLabel* CControlContainer::AddLabel ( StringA strId, Vec3D vecPosition, StringA strLabel, class CControlStyle* pStyle )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddLabel" );
        class CControlLabel* pControl = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pStyle ) );
        stack.Push ( strLabel );
        stack.Push ( vecPosition );
        stack.Push ( strId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pControl ) );
        CallMethod ( &stack, NULL );
        return pControl;
    }

    void CControlContainer::RemoveControl ( class CControlBase* pControl )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveControl" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pControl ) );
        CallMethod ( &stack, NULL );
    }

}
