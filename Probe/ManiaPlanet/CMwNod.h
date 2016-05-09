#pragma once

namespace ManiaPlanet
{

    class CClassicArchive;
    class CSystemFidFile;

    class CMwNod : public Allocatable
    {
    public:
        #include "Generated/CMwNod.Generated.h"

        virtual void            m0                      ()                  {}
        virtual                 ~CMwNod                 ()                  {}
        virtual CMwClassInfo*   GetClassInfo            () const            { return NULL; }
        virtual uint            GetClassID              () const            { return 0; }
        virtual bool            Is                      ( uint uiClassID )  { return false; }
        virtual NodMeta*        GetNodMeta              ()                  { return NULL; }
        virtual void            m18                     ()                  {}
        virtual void            m1C                     ()                  {}
        virtual void            m20                     ()                  {}
        virtual void            GetPropertyIndirect     ( CMwStack* pStack, void* pValue ) const    {}
        virtual void            CallMethodIndirect      ( CMwStack* pStack, void* pValue )          {}
        virtual void            m2C                     ()                  {}
        virtual void            m30                     ()                  {}
        virtual void            ReadWriteChunks         ( CClassicArchive* pArchive )                   {}
        virtual void            ReadWriteChunk          ( CClassicArchive* pArchive, uint uiChunkID )   {}
        virtual void            m3C                     ()                  {}
        virtual uint            GetChunkLoadFlags       ( uint uiChunkID )  { return 0; }
        virtual uint            GetChunkIDByIndex       ( uint uiIndex )    { return 0; }
        virtual uint            GetNumChunks            () const            { return 0; }
        virtual void            OnFinishReadWriteChunks ()                  {}

        uint                    AddRef                  ()                  { return ++m_uiRefCount; }
        void                    Release                 ();

        CSystemFidFile*         GetFid                  () const    { return m_pFid; }

        void                    GetProperty             ( CMwStack* pStack, void* pValue ) const;
        void                    CallMethod              ( CMwStack* pStack, void* pValue );

    private:
        uint                    m_uiRefCount;
        CSystemFidFile*         m_pFid;
        void*                   m_pList;
        uint                    m_field10;
    };

}
