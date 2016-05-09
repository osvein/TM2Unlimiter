#pragma once

namespace ManiaPlanet
{

    class CMwEngineManager
    {
    public:
        virtual                     ~CMwEngineManager   () = 0;

        static CMwEngineManager*    GetInstance         ()          { return (CMwEngineManager *)Address::Inst.pEngineManager; }

        uint                        NumEngineInfos      () const    { return m_EngineInfos.Size (); }
        CMwEngineInfo*              GetEngineInfo       ( CMwEngineInfo::eEngine engineID ) const     { return m_EngineInfos [ engineID ]; }
        CMwClassInfo*               GetClassInfo        ( uint uiClassID ) const;
        
    private:
        Array < CMwEngineInfo* >    m_EngineInfos;
    };

}
