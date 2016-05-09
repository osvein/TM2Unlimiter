#pragma once

namespace ManiaPlanet
{

    class CMwNod;

    class CMwClassInfo
    {
    public:
        virtual             ~CMwClassInfo           () = 0;

        uint                GetID                   () const        { return m_ID; }
        CMwClassInfo*       GetParentClassInfo      () const        { return m_pParentClassInfo; }
        const char*         GetName                 () const        { return m_pszName; }

        uint                NumMembers              () const        { return m_uiNumMemberInfos; }
        CMwMemberInfo*      GetMemberInfo           ( uint i );
        CMwMemberInfo*      GetMemberInfo           ( const char* pszName );

        CMwNod*             CreateInstance          () const        { return m_pCreateInstance (); }

    private:
        typedef CMwNod* (CreateInstance_t)();

        uint                m_ID;
        CMwClassInfo*       m_pParentClassInfo;
        uint                m_fieldC;
        uint                m_field10;
        const char*         m_pszName;
        CMwClassInfo*       m_pNext;
        CreateInstance_t*   m_pCreateInstance;
        uint                m_field20;
        uint                m_field24;
        uint                m_field28;
        uint                m_field2C;
        uint                m_field30;
        CMwMemberInfo**     m_ppMemberInfos;
        uint                m_uiNumMemberInfos;
    };

}
