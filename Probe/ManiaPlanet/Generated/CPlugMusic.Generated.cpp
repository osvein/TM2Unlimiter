#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMusic* CPlugMusic::CreateInstance ()
    {
        return static_cast < CPlugMusic* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CPlugFileSnd> >& CPlugMusic::GetAdditionalTracks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalTracks" );
        struct
        {
            List < nodptr<class CPlugFileSnd> >* pResult;
            List < nodptr<class CPlugFileSnd> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugMusic::SetAdditionalTracks ( List < nodptr<class CPlugFileSnd> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AdditionalTracks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
