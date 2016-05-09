#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugSkinnedPlayerModel* CPlugSkinnedPlayerModel::CreateInstance ()
    {
        return static_cast < CPlugSkinnedPlayerModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugAnimFile* CPlugSkinnedPlayerModel::GetAnimFile () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimFile" );
        class CPlugAnimFile* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugSkinnedPlayerModel::SetAnimFile ( class CPlugAnimFile* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AnimFile" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugSolid2Model* CPlugSkinnedPlayerModel::GetSolid2Model_Evo0 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo0" );
        class CPlugSolid2Model* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugSkinnedPlayerModel::SetSolid2Model_Evo0 ( class CPlugSolid2Model* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo0" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugSolid2Model* CPlugSkinnedPlayerModel::GetSolid2Model_Evo1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo1" );
        class CPlugSolid2Model* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugSkinnedPlayerModel::SetSolid2Model_Evo1 ( class CPlugSolid2Model* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugSolid2Model* CPlugSkinnedPlayerModel::GetSolid2Model_Evo2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo2" );
        class CPlugSolid2Model* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CPlugSkinnedPlayerModel::SetSolid2Model_Evo2 ( class CPlugSolid2Model* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Solid2Model_Evo2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
