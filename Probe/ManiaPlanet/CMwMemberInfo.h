#pragma once

namespace ManiaPlanet
{

    class CMwMemberInfo
    {
    public:
        enum eType
        {
            ACTION,
            BOOL,
            BOOLARRAY,
            BOOLBUFFER,
            BOOLBUFFERCAT,
            CLASS,
            CLASSARRAY,
            CLASSBUFFER,
            CLASSBUFFERCAT,
            COLOR,
            COLORARRAY,
            COLORBUFFER,
            COLORBUFFERCAT,
            ENUM,
            ENUMARRAY,
            ENUMBUFFER,
            ENUMBUFFERCAT,
            INT,
            INTARRAY,
            INTBUFFER,
            INTBUFFERCAT,
            INTRANGE,
            ISO4,
            ISO4ARRAY,
            ISO4BUFFER,
            ISO4BUFFERCAT,
            ISO3,
            ISO3ARRAY,
            ISO3BUFFER,
            ISO3BUFFERCAT,
            ID,
            IDARRAY,
            IDBUFFER,
            IDBUFFERCAT,
            NATURAL,
            NATURALARRAY,
            NATURALBUFFER,
            NATURALBUFFERCAT,
            NATURALRANGE,
            REAL,
            REALARRAY,
            REALBUFFER,
            REALBUFFERCAT,
            REALRANGE,
            STRING,
            STRINGARRAY,
            STRINGBUFFER,
            STRINGBUFFERCAT,
            STRINGINT,
            STRINGINTARRAY,
            STRINGINTBUFFER,
            STRINGINTBUFFERCAT,
            VEC2,
            VEC2ARRAY,
            VEC2BUFFER,
            VEC2BUFFERCAT,
            VEC3,
            VEC3ARRAY,
            VEC3BUFFER,
            VEC3BUFFERCAT,
            VEC4,
            VEC4ARRAY,
            VEC4BUFFER,
            VEC4BUFFERCAT,
            INT3,
            INT3ARRAY,
            INT3BUFFER,
            INT3BUFFERCAT,
            NAT3,
            NAT3ARRAY,
            NAT3BUFFER,
            NAT3BUFFERCAT,
            QUAT,
            QUATARRAY,
            QUATBUFFER,
            QUATBUFFERCAT,
            PROC
        };

                                CMwMemberInfo           ();
                                CMwMemberInfo           ( uint uiID, eType type, uint uiFlags1 );

        eType                   GetType                 () const    { return m_Type; }
        uint                    GetID                   () const    { return m_uiID; }
        const char*             GetName                 () const    { return m_pszName; }

        uint                    GetFieldOffset          () const    { return m_uiFieldOffset; }

    private:
        eType                   m_Type;
        uint                    m_uiID;
        void*                   m_pParam;
        uint                    m_uiFieldOffset;
        const char*             m_pszName;
        uint                    m_uiFlags1;
        uint                    m_uiFlags2;
    };

}
