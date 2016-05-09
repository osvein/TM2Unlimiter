#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCardManager* CGameControlCardManager::CreateInstance ()
    {
        return static_cast < CGameControlCardManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameControlDataType> >& CGameControlCardManager::GetDataTypes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DataTypes" );
        struct
        {
            List < nodptr<class CGameControlDataType> >* pResult;
            List < nodptr<class CGameControlDataType> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlCardManager::SetDataTypes ( List < nodptr<class CGameControlDataType> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DataTypes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
