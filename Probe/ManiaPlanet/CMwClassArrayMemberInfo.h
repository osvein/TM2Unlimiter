#pragma once

namespace ManiaPlanet
{

    class CMwClassInfo;

    class CMwClassArrayMemberInfo : public CMwMemberInfo
    {
    public:
        CMwClassInfo*   GetClass                () const        { return m_pClassInfo; }

    private:
        uint            m_field1C;
        const char*     m_pszFriendlyClassName;
        uint            m_field24;
        CMwClassInfo*   m_pClassInfo;
    };

}
