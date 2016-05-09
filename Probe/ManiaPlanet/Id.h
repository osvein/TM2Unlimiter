#pragma once

namespace ManiaPlanet
{

    class Id
    {
    public:
                        Id                  ();
                        Id                  ( const Id& other );
                        Id                  ( const char* psz );

        uint            GetKey              () const    { return m_iKey; }

        const char*     Resolve             () const;

        Id&             operator=           ( const Id& other )
        {
            m_iKey = other.m_iKey;
            return *this;
        }

        Id&             operator=           ( const char* psz );

        bool            operator==          ( const Id& other ) const
        {
            return m_iKey == other.m_iKey;
        }

        bool            operator!=          ( const Id& other ) const
        {
            return !(*this == other);
        }

    private:
        int             m_iKey;
    };

}
