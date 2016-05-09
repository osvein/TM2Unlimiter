#pragma once

namespace ManiaPlanet
{

    class CClassicArchive
    {
    public:
        virtual                 ~CClassicArchive            () = 0;
        virtual CMwNod**        ReadWriteNodRef             () = 0;
        virtual CMwNod**        ReadWriteNodRefNoCreate     () = 0;

        CClassicBuffer*         GetBuffer                   () const    { return m_pBuffer; }
        bool                    IsWriting                   () const    { return m_bWriting != 0; }

    private:
        CClassicBuffer*         m_pBuffer;
        uint                    m_bWriting;
        uint                    m_bTextMode;
        uint                    m_bBucr3IsR;
        void*                   m_pStringIndices;
    };

}
