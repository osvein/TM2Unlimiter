#pragma once

namespace ManiaPlanet
{

    class CGbxGame : public CGbxApp
    {
    public:
        static CGbxGame*    GetInstance         ()          { return *(CGbxGame **)Address::Inst.ppGbxGame; }

        CGameCtnApp*        GetGame             () const    { return m_pGame; }

    private:
        CGameCtnApp*        m_pGame;
        uint                m_field104;
        StringW             m_field108;
        StringW             m_field110;
        StringW             m_field118;
        StringW             m_field120;
        StringW             m_field128;
        StringW             m_field130;
        StringW             m_field138;
        StringW             m_field140;
        uint                m_field148;
        uint                m_field14C;
    };

}
