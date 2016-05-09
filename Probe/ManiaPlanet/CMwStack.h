#pragma once

namespace ManiaPlanet
{

    class CMwNod;

    class CMwStack
    {
    public:
        enum eItemType
        {
            ITEM_MEMBER     = 0,
            ITEM_BOOL       = 0x10000001,
            ITEM_OBJECT     = 0x10000002,
            ITEM_ENUM       = 0x10000003,
            ITEM_ISO4       = 0x10000004,
            ITEM_VEC2       = 0x10000005,
            ITEM_VEC3       = 0x10000006,
            ITEM_INT3       = 0x10000007,
            ITEM_UINT3      = 0x10000008,
            ITEM_INT        = 0x10000009,
            ITEM_UINT       = 0x1000000A,
            ITEM_FLOAT      = 0x1000000B,
            ITEM_STRING     = 0x1000000C,
            ITEM_WSTRING    = 0x1000000D
        };

        class Item : public Allocatable
        {
        public:
            Item                ()
            {
                m_pValue = NULL;
                m_Type = ITEM_MEMBER;
            }

            Item                ( void* pValue, eItemType type )
            {
                m_pValue = pValue;
                m_Type = type;
            }

            void*           m_pValue;
            eItemType       m_Type;
        };

                            CMwStack            ();
                            ~CMwStack           ();

        uint                Size                () const            { return m_sSize; }
        bool                Empty               () const            { return Size () == 0; }

        int                 GetTopIndex         () const            { return m_iTopIndex; }
        void                SetTopIndex         ( int iTopIndex )   { m_iTopIndex = iTopIndex; }

        void                Clear               ();

        void                Push                ( CMwMemberInfo* pMemberInfo );
        void                Push                ( bool& b );
        void                Push                ( CMwNod*& pNod );
        void                PushEnum            ( int& value );
        void                Push                ( Matrix43& matrix );
        void                Push                ( Vec2D& vec2 );
        void                Push                ( Vec3D& vec3 );
        void                Push                ( int3& i3 );
        void                Push                ( uint3& ui3 );
        void                Push                ( int& i );
        void                Push                ( uint& ui );
        void                Push                ( float& f );
        void                Push                ( StringA& str );
        void                Push                ( StringW& wstr );

        Item&               operator[]          ( int iIndex );

    private:
        void                Push                ( const Item& item );

        void                Resize              ( short sSize );
        void                Reserve             ( short sCapacity );

        Item                m_ContainedItems[2];
        Item*               m_pExtraItems;
        short               m_sSize;
        short               m_sExtraItemsCapacity;
        int                 m_iTopIndex;
    };

}
