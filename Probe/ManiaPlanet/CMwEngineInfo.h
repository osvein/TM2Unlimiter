#pragma once

namespace ManiaPlanet
{

    class CMwEngineInfo
    {
    public:
        enum eEngine
        {
            MWFOUNDATIONS   = 1,
            GAME            = 3,
            GRAPHIC         = 4,
            FUNCTION        = 5,
            HMS             = 6,
            CONTROL         = 7,
            MOTION          = 8,
            PLUG            = 9,
            SCENE           = 10,
            SYSTEM          = 11,
            VISION          = 12,
            AUDIO           = 16,
            SCRIPT          = 17,
            NET             = 18,
            INPUT           = 19,
            XML             = 20,
            TRACKMANIA      = 36,
            QUESTMANIA      = 44,
            SHOOTMANIA      = 45
        };

        virtual                     ~CMwEngineInfo          () = 0;

        eEngine                     GetID                   () const    { return m_ID; }
        const char*                 GetName                 () const    { return m_pszName; }

        CMwClassInfo*               GetClassInfo            ( uint uiClassID ) const;

    private:
        eEngine                     m_ID;
        const char*                 m_pszName;
        Array < CMwClassInfo* >     m_Classes;
    };

}
