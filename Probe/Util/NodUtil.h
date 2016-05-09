#pragma once

template < typename T >
struct _RemovePointer
{
    typedef T Type;
};

template < typename T >
struct _RemovePointer < T* >
{
public:
    typedef T Type;
};

template < class T >
T nod_cast ( ManiaPlanet::CMwNod* pNod )
{
    if ( pNod && pNod->Is ( _RemovePointer < T >::Type::CLASSID ) )
        return reinterpret_cast < T > ( pNod );

    return NULL;
}

template < class T >
void ReleaseNod ( T*& pNod )
{
    if ( !pNod )
        return;

    pNod->Release ();
    pNod = NULL;
}

template < class T >
class nodptr
{
public:
                nodptr          ()
    {
        m_pNod = NULL;
    }

                nodptr          ( T* pNod )
    {
        m_pNod = NULL;
        *this = pNod;
    }

                nodptr          ( const nodptr<T>& other )
    {
        m_pNod = NULL;
        *this = other;
    }

                ~nodptr         ()
    {
        *this = NULL;
    }

    nodptr<T>&  operator=       ( T* pNod )
    {
        if ( pNod == m_pNod )
            return *this;

        if ( m_pNod )
            m_pNod->Release ();

        m_pNod = pNod;

        if ( m_pNod )
            m_pNod->AddRef ();

        return *this;
    }

    nodptr<T>&  operator=       ( const nodptr<T>& other )
    {
        return *this = other.m_pNod;
    }

                operator T*     () const
    {
        return m_pNod;
    }

    T*          operator->      ()
    {
        return m_pNod;
    }

    T&          operator*       ()
    {
        return *m_pNod;
    }

    T*          Get             () const
    {
        return m_pNod;
    }

                operator bool   () const
    {
        return m_pNod != NULL;
    }

    bool        operator==      ( nodptr<T> ptr )
    {
        return m_pNod == ptr.m_pNod;
    }

    bool        operator!=      ( nodptr<T> ptr )
    {
        return !(*this == ptr);
    }

private:
    T*          m_pNod;
};
