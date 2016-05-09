#pragma once

namespace ManiaPlanet
{

    class CGameCtnDecorationSize : public CMwNod
    {
    public:
        #include "Generated/CGameCtnDecorationSize.Generated.h"

        uint3           GetSize             () const                { return m_Size; }
        void            SetSize             ( uint3 size )          { m_Size = size; }

    private:
        Vec2D           m_vecEditionZoneMin;
        Vec2D           m_vecEditionZoneMax;
        void*           m_pScene;
        uint            m_field28;
        uint3           m_Size;
        uint            m_uiBaseHeight;
        uint            m_uiVertexCount;
    };

}
