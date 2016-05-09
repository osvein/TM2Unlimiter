#pragma once

namespace ManiaPlanet
{

    class CClassicBufferMemory : public CClassicBuffer
    {
    public:

    private:
        void*           m_pData;
        uint            m_uiSize;
        uint            m_uiPosition;
        uint            m_uiCapacity;
        uint            m_uiCapacityIncrement;
    };

}
