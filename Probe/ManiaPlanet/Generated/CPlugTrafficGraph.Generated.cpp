#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugTrafficGraph* CPlugTrafficGraph::CreateInstance ()
    {
        return static_cast < CPlugTrafficGraph* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CPlugTrafficFlowDescriptor> >& CPlugTrafficGraph::GetFlowDescriptors () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FlowDescriptors" );
        struct
        {
            List < nodptr<class CPlugTrafficFlowDescriptor> >* pResult;
            List < nodptr<class CPlugTrafficFlowDescriptor> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficGraph::SetFlowDescriptors ( List < nodptr<class CPlugTrafficFlowDescriptor> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FlowDescriptors" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CPlugSpline3D> >& CPlugTrafficGraph::GetSplines () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Splines" );
        struct
        {
            List < nodptr<class CPlugSpline3D> >* pResult;
            List < nodptr<class CPlugSpline3D> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CPlugTrafficGraph::SetSplines ( List < nodptr<class CPlugSpline3D> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Splines" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
