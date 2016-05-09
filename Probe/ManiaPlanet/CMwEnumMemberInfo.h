#pragma once

namespace ManiaPlanet
{

    class CMwEnumMemberInfo : public CMwMemberInfo
    {
    public:
        uint                NumValues           () const            { return m_uiNumValues; }
        const char*         GetName             ( int i ) const;
        int                 Parse               ( const char* pszName );

    private:
        uint                m_field1C;
        uint                m_uiNumValues;
        const char**        m_ppszValueNames;
    };

}
