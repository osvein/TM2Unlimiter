#include "StdInc.h"

namespace ManiaPlanet
{

    CMwStack::CMwStack ()
    {
        m_iTopIndex = 0;
        m_sSize = 0;
        m_sExtraItemsCapacity = 0;
        m_pExtraItems = NULL;
    }


    CMwStack::~CMwStack ()
    {
        Clear ();
    }

    void CMwStack::Clear ()
    {
        if ( m_pExtraItems )
        {
            delete[] m_pExtraItems;
            m_pExtraItems = NULL;
        }

        m_sSize = 0;
        m_iTopIndex = 0;
    }

    void CMwStack::Push ( CMwMemberInfo* pMemberInfo )
    {
        Push ( Item ( pMemberInfo, ITEM_MEMBER ) );
    }

    void CMwStack::Push ( bool& b )
    {
        Push ( Item ( &b, ITEM_BOOL ) );
    }

    void CMwStack::Push ( CMwNod*& pNod )
    {
        Push ( Item ( &pNod, ITEM_OBJECT ) );
    }

    void CMwStack::PushEnum ( int& value )
    {
        Push ( Item ( &value, ITEM_ENUM ) );
    }

    void CMwStack::Push ( Matrix43& matrix )
    {
        Push ( Item ( &matrix, ITEM_ISO4 ) );
    }

    void CMwStack::Push ( Vec2D& vec2 )
    {
        Push ( Item ( &vec2, ITEM_VEC2 ) );
    }

    void CMwStack::Push ( Vec3D& vec3 )
    {
        Push ( Item ( &vec3, ITEM_VEC3 ) );
    }

    void CMwStack::Push ( int3& i3 )
    {
        Push ( Item ( &i3, ITEM_INT3 ) );
    }

    void CMwStack::Push ( uint3& ui3 )
    {
        Push ( Item ( &ui3, ITEM_UINT3 ) );
    }

    void CMwStack::Push ( int& i )
    {
        Push ( Item ( &i, ITEM_INT ) );
    }

    void CMwStack::Push ( uint& ui )
    {
        Push ( Item ( &ui, ITEM_UINT ) );
    }

    void CMwStack::Push ( float& f )
    {
        Push ( Item ( &f, ITEM_FLOAT ) );
    }

    void CMwStack::Push ( StringA& str )
    {
        Push ( Item ( &str, ITEM_STRING ) );
    }

    void CMwStack::Push ( StringW& wstr )
    {
        Push ( Item ( &wstr, ITEM_WSTRING ) );
    }

    void CMwStack::Push ( const Item& item )
    {
        Resize ( m_sSize + 1 );
        (*this) [ m_sSize - 1 ] = item;
    }

    CMwStack::Item& CMwStack::operator[] ( int iIndex )
    {
        int i = m_iTopIndex + iIndex;
        assert ( i >= 0 && i < m_sSize );
        return i < 2 ? m_ContainedItems[i] : m_pExtraItems[i - 2];
    }

    void CMwStack::Resize ( short sSize )
    {
        Reserve ( sSize );
        m_sSize = sSize;
    }

    void CMwStack::Reserve ( short sCapacity )
    {
        if ( sCapacity <= 2 + m_sExtraItemsCapacity )
            return;

        m_sExtraItemsCapacity = sCapacity - 2;
        Item* pNewExtraItems = new Item[m_sExtraItemsCapacity];
        if ( m_pExtraItems )
        {
            memcpy ( pNewExtraItems, m_pExtraItems, (m_sSize - 2) * sizeof(Item) );
            delete[] m_pExtraItems;
        }
        m_pExtraItems = pNewExtraItems;
    }

}
