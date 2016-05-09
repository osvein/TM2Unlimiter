#pragma once

namespace ManiaPlanet
{

	template < typename T >
	class List : public Array<T>
	{
	public:
                            List                    ()
        {
            m_pBuffer = NULL;
            m_iSize = 0;
            m_iCapacity = 0;
        }

                            List                    ( const List < T >& other )
        {
            m_pBuffer = NULL;
            m_iSize = 0;
            m_iCapacity = 0;

            *this = other;
        }

                            ~List                   ()
        {
            Clear ();

            m_pBuffer = NULL;
            m_iSize = 0;
            m_iCapacity = 0;
        }

        List < T >&         operator=               ( const List < T >& other )
        {
            Clear ();
            Reserve ( other.Size () );
            AddRange ( other );
            return *this;
        }

        void                Reserve                 ( int iNewCapacity )
        {
            assert ( iNewCapacity > 0 );
            if ( iNewCapacity < m_iCapacity )
                return;

            T* pNewBuffer = (T *)( (byte *)Allocatable::operator new(sizeof(int) + iNewCapacity*sizeof(T)) + sizeof(dword) );
            *((int *)pNewBuffer - 1) = iNewCapacity;
            if ( m_pBuffer )
            {
                for ( int i = 0; i < m_iSize; i++ )
                {
                    new (&pNewBuffer[i]) T ( m_pBuffer[i] );
                    m_pBuffer[i].~T ();
                }
                Allocatable::operator delete ( (int *)m_pBuffer - 1 );
            }

            m_pBuffer = pNewBuffer;
            m_iCapacity = iNewCapacity;
        }

        void                Resize              ( int iNewSize )
        {
            if ( iNewSize > m_iCapacity )
            {
                int iNewCapacity = m_iCapacity;
                if ( iNewCapacity == 0 )
                    iNewCapacity = 1;

                while ( iNewSize > iNewCapacity )
                {
                    iNewCapacity *= 2;
                }
                Reserve ( iNewCapacity );
            }

            for ( int i = m_iSize; i < iNewSize; i++ )
            {
                new (&m_pBuffer[i]) T ();
            }
            for ( int i = iNewSize; i < m_iSize; i++ )
            {
                m_pBuffer[i].~T ();
            }
            m_iSize = iNewSize;
        }

        void                SetSize             ( int iNewSize )
        {
            m_iSize = iNewSize;
        }

        void                Add                 ( const T& item )
        {
            Insert ( m_iSize, item );
        }

        void                AddRange            ( const List < T >& other )
        {
            for ( int i = 0; i < other.Size (); i++ )
            {
                Add ( other[i] );
            }
        }

        void                Insert              ( int index, const T& item )
        {
            Resize ( m_iSize + 1 );
            for ( int i = m_iSize - 1; i > index; i-- )
            {
                m_pBuffer [ i ] = m_pBuffer [ i - 1 ];
            }
            m_pBuffer [ index ] = item;
        }

        bool                Remove              ( const T& item )
        {
            int index = IndexOf ( item );
            if ( index < 0 )
                return false;

            RemoveAt ( index );
            return true;
        }

        void                RemoveAt            ( int index )
        {
            assert ( index >= 0 && index < m_iSize );
            for ( int i = index; i < m_iSize - 1; i++ )
            {
                m_pBuffer [ i ] = m_pBuffer [ i + 1 ];
            }
            Resize ( m_iSize - 1 );
        }

        int                 IndexOf             ( const T& item ) const
        {
            for ( int i = 0; i < m_iSize; i++ )
            {
                if ( m_pBuffer [ i ] == item )
                    return i;
            }
            return -1;
        }

        void                Clear               ()
        {
            Resize ( 0 );
            if ( m_pBuffer )
            {
                Allocatable::operator delete ( (int *)m_pBuffer - 1 );
                m_pBuffer = NULL;
            }
        }

	private:
		int                 m_iCapacity;
	};

}
