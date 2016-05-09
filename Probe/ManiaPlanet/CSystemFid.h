#pragma once

namespace ManiaPlanet
{

    class CSystemFid : public CMwNod
    {
    public:
        #include "Generated/CSystemFid.Generated.h"

        class CLoader
        {
        public:
            virtual CClassicBuffer*     GetBuffer           ( CSystemFid* pFid, uint uiMode, CClassicBuffer* pInnerBuffer ) = 0;
            virtual void                FreeBuffer          ( CSystemFid* pFid, CClassicBuffer* pBuffer ) = 0;
        };

        uint                    GetFidClassID       () const    { return m_uiClassID; }

        CLoader*				GetLoader			() const	{ return m_pLoader; }

        CMwNod*                 GetCreateNod        ();

    protected:
        CSystemFids*            m_pFolder;
        uint                    m_uiFlags1;
        uint                    m_uiFlags2;
        CMwNod*                 m_pNod;
        List < CSystemFid* >    m_ChildFids;
        CSystemFid*             m_pParentFid;
        CSystemFidParameters    m_Parameters;
        uint                    m_uiClassID;
        void*                   m_pHeaderChunks;
        CLoader*                m_pLoader;
        uint                    m_uiIndex;
    };

}
