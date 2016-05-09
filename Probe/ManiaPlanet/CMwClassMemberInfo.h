#pragma once

namespace ManiaPlanet
{

    class CMwClassInfo;

    class CMwClassMemberInfo : public CMwMemberInfo
    {
    public:
        CMwClassInfo*           GetClass                () const        { return m_pClassInfo; }

    private:
        CMwClassInfo*           m_pClassInfo;
    };

}
