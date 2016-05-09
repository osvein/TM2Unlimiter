#pragma once

namespace ManiaPlanet
{

	template < typename T >
	class Array : public Allocatable
	{
	public:
		int                 Size                () const
		{
			return m_iSize;
		}

		T&					operator[]			( int index )
		{
			return At ( index );
		}

		const T&			operator[]			( int index ) const
		{
			return At ( index );
		}

        T&                  At                  ( int index )
        {
            return m_pBuffer [ index ];
        }

        const T&            At                  ( int index ) const
        {
            return m_pBuffer [ index ];
        }

        bool                Contains            ( const T& item ) const
        {
            for ( int i = 0; i < m_iSize; i++ )
            {
                if ( (*this)[i] == item )
                    return true;
            }
            return false;
        }


        class iterator
        {
        public:
                            iterator            ( const iterator& other )
            {
                *this = other;
            }

            iterator&       operator=           ( const iterator& other )
            {
                m_pArray = other.m_pArray;
                m_iIndex = other.m_iIndex;
                return *this;
            }

            T&              operator*           ()
            {
                assert ( m_iIndex >= 0 && m_iIndex < m_pArray->Size () );
                return m_pArray->At ( m_iIndex );
            }

            T*              operator->          ()
            {
                return &(**this);
            }

            bool            operator==          ( const iterator& other ) const
            {
                return m_pArray == other.m_pArray && m_iIndex == other.m_iIndex;
            }

            bool            operator!=          ( const iterator& other ) const
            {
                return !(*this == other);
            }

            bool            operator<           ( const iterator& other ) const
            {
                assert ( m_pArray == other.m_pArray );
                return m_iIndex < other.m_iIndex;
            }

            bool            operator<=          ( const iterator& other ) const
            {
                assert ( m_pArray == other.m_pArray );
                return m_iIndex <= other.m_iIndex;
            }

            bool            operator>           ( const iterator& other ) const
            {
                return !(*this <= other);
            }

            bool            operator>=          ( const iterator& other ) const
            {
                return !(*this < other);
            }

            iterator&       operator++          ()
            {
                assert ( m_iIndex < m_pArray->Size () );
                m_iIndex++;
                return *this;
            }

            iterator        operator++          ( int )
            {
                iterator result ( *this );
                ++*this;
                return result;
            }

            iterator&       operator--          ()
            {
                assert ( m_iIndex > 0 );
                m_iIndex--;
                return *this;
            }

            iterator        operator--          ( int )
            {
                iterator result ( *this );
                --*this;
                return result;
            }

        private:
            friend Array < T >;

                            iterator            ( Array < T >* pArray, int iIndex )
                : m_pArray ( pArray ), m_iIndex ( iIndex )
            {
            }

            Array < T >*    m_pArray;
            int             m_iIndex;
        };

        iterator            Begin               ()
        {
            return iterator ( this, 0 );
        }

        iterator            End                 ()
        {
            return iterator ( this, Size () );
        }

    protected:
		int                 m_iSize;
		T*                  m_pBuffer;
	};

}
