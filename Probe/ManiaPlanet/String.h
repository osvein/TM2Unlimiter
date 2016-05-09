#pragma once

namespace ManiaPlanet
{

    template < typename T, class Derived >
	class String : public Allocatable
	{
	public:
                            String              ()
        {
            m_dwSize = 0;
            m_psz = Derived::ms_pszEmpty;
        }

                            String              ( const T* psz )
        {
            m_dwSize = 0;
            m_psz = Derived::ms_pszEmpty;
            *this = psz;
        }

                            String              ( const String < T, Derived >& other )
        {
            m_dwSize = 0;
            m_psz = Derived::ms_pszEmpty;
            *this = other;
        }

                            String              ( String < T, Derived >&& other )
        {
            *this = std::move ( other );
        }

                            ~String             ()
        {
            Clear ();
        }

		dword               Size                () const        { return m_dwSize; }
		T*                  CStr                () const        { return m_psz; }

        String&             operator=           ( const T* psz )
        {
            int iLen = std::char_traits < T >::length ( psz );
            Resize ( iLen );
            memcpy ( m_psz, psz, iLen * sizeof(T) );
            return *this;
        }

        String&             operator=           ( const String < T, Derived >& other )
        {
            Resize ( other.Size () );
            memcpy ( m_psz, other.m_psz, other.Size () * sizeof(T) );
            return *this;
        }

        String&             operator=           ( String < T, Derived >&& other )
        {
            m_dwSize = other.m_dwSize;
            m_psz = other.m_psz;

            other.m_dwSize = 0;
            other.m_psz = Derived::ms_pszEmpty;
            return *this;
        }

        bool                operator==          ( const T* psz )
        {
            dword dwLength = std::char_traits < T >::length ( psz );
            return dwLength == m_dwSize && !memcmp ( psz, m_psz, m_dwSize * sizeof(T) );
        }

        bool                operator==          ( const String < T, Derived >& other )
        {
            return other.m_dwSize == m_dwSize && !memcmp ( other.m_psz, m_psz, m_dwSize * sizeof(T) );
        }

        bool                operator!=          ( const char* psz )                     { return !(*this == psz); }
        bool                operator!=          ( const String < T, Derived >& other )  { return !(*this == other); }
        
        void                Resize              ( dword dwSize )
        {
            if ( dwSize == m_dwSize )
                return;

            static_cast < Derived* > ( this )->Reserve ( dwSize );
            m_dwSize = dwSize;
            m_psz [ m_dwSize ] = (T)0;
        }
        
        void                Clear               ()
        {
            if ( !m_psz || m_psz == Derived::ms_pszEmpty )
                return;

            typedef void (operator_delete_t) ( void* ptr );
            operator_delete_t* operator_delete = (operator_delete_t *)Address::Inst.operator_delete;
            if ( ((byte *)m_psz)[-1] & 0x80 )
                operator_delete ( (byte *)m_psz - 4 );
            else
                operator_delete ( (byte *)m_psz - sizeof(T) );

            m_psz = Derived::ms_pszEmpty;
            m_dwSize = 0;
        }

    protected:
		dword               m_dwSize;
		T*                  m_psz;
	};

    class StringA : public String < char, StringA >
    {
        typedef String < char, StringA > Base;
        friend Base;

    public:
                            StringA             ()
        {

        }

                            StringA             ( const char* psz )
                                : Base ( psz )
        {

        }

                            StringA             ( const StringA& other )
                                : Base ( other )
        {

        }

                            StringA             ( StringA&& other )
                                : Base ( std::move ( other ) )
        {

        }

        void                Reserve             ( dword dwCapacity, bool bKeepContent = true, char** ppOrigSz = NULL );

    private:
        static char*        ms_pszEmpty;
    };

    class StringW : public String < wchar_t, StringW >
    {
        typedef String < wchar_t, StringW > Base;
        friend Base;

    public:
                            StringW             ()
        {

        }

                            StringW             ( const wchar_t* pwsz )
                                : Base ( pwsz )
        {

        }

                            StringW             ( const StringW& other )
                                : Base ( other )
        {

        }

                            StringW             ( StringW&& other )
                                : Base ( std::move ( other ) )
        {

        }

        void                Reserve             ( dword dwCapacity, bool bKeepContent = true, wchar_t** ppOrigSz = NULL );

    private:
        static wchar_t*     ms_pszEmpty;
    };

}
