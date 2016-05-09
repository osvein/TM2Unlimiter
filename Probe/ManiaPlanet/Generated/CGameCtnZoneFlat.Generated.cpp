#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnZoneFlat* CGameCtnZoneFlat::CreateInstance ()
    {
        return static_cast < CGameCtnZoneFlat* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CGameCtnBlockInfoClip* CGameCtnZoneFlat::GetBlockInfoClip () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoClip" );
        class CGameCtnBlockInfoClip* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnZoneFlat::SetBlockInfoClip ( class CGameCtnBlockInfoClip* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoClip" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoFlat* CGameCtnZoneFlat::GetBlockInfoFlat () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoFlat" );
        class CGameCtnBlockInfoFlat* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnZoneFlat::SetBlockInfoFlat ( class CGameCtnBlockInfoFlat* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoFlat" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoPylon* CGameCtnZoneFlat::GetBlockInfoPylon () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoPylon" );
        class CGameCtnBlockInfoPylon* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnZoneFlat::SetBlockInfoPylon ( class CGameCtnBlockInfoPylon* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoPylon" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnBlockInfoRoad* CGameCtnZoneFlat::GetBlockInfoRoad () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoRoad" );
        class CGameCtnBlockInfoRoad* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnZoneFlat::SetBlockInfoRoad ( class CGameCtnBlockInfoRoad* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlockInfoRoad" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnZoneFlat::GetGroundOnly () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GroundOnly" );
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

    void CGameCtnZoneFlat::SetGroundOnly ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GroundOnly" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
