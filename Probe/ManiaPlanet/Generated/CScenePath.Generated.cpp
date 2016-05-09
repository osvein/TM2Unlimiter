#include "StdInc.h"

namespace ManiaPlanet
{

    CScenePath* CScenePath::CreateInstance ()
    {
        return static_cast < CScenePath* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Array < class CFuncKeysPath* >& CScenePath::GetPaths () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Paths" );
        struct
        {
            Array < class CFuncKeysPath* >* pResult;
            Array < class CFuncKeysPath* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScenePath::SetPaths ( Array < class CFuncKeysPath* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Paths" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CSceneSector* >& CScenePath::GetSectors () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sectors" );
        struct
        {
            Array < class CSceneSector* >* pResult;
            Array < class CSceneSector* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CScenePath::SetSectors ( Array < class CSceneSector* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Sectors" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
