#pragma once

namespace ManiaPlanet
{

    struct Vec2D
    {
    public:
                    Vec2D       ()
        {
            X = 0.0f;
            Y = 0.0f;
        }

                    Vec2D       ( float fX, float fY )
        {
            X = fX;
            Y = fY;
        }

                    Vec2D       ( const Vec2D& other )
        {
            *this = other;
        }

        Vec2D&      operator=   ( const Vec2D& other )
        {
            X = other.X;
            Y = other.Y;
            return *this;
        }

        bool        operator==  ( const Vec2D& other ) const
        {
            return X == other.X &&
                   Y == other.Y;
        }

        bool        operator!=  ( const Vec2D& other ) const
        {
            return !(*this == other);
        }

        Vec2D       operator+   ( const Vec2D& other ) const
        {
            return Vec2D ( X + other.X, Y + other.Y );
        }

        Vec2D       operator-   () const
        {
            return Vec2D ( -X, -Y );
        }

        Vec2D       operator-   ( const Vec2D& other ) const
        {
            return Vec2D ( X - other.X, Y - other.Y );
        }

        float       X;
        float       Y;
    };

}
