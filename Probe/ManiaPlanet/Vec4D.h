#pragma once

namespace ManiaPlanet
{

    struct Vec4D
    {
    public:
                    Vec4D       ()
        {
            X = 0.0f;
            Y = 0.0f;
            Z = 0.0f;
            W = 0.0f;
        }

                    Vec4D       ( float fX, float fY, float fZ, float fW )
        {
            X = fX;
            Y = fY;
            Z = fZ;
            W = fW;
        }

                    Vec4D       ( const Vec4D& other )
        {
            *this = other;
        }

        Vec4D&      operator=   ( const Vec4D& other )
        {
            X = other.X;
            Y = other.Y;
            Z = other.Z;
            W = other.W;
            return *this;
        }

        bool        operator==  ( const Vec4D& other ) const
        {
            return X == other.X &&
                   Y == other.Y &&
                   Z == other.Z &&
                   W == other.W;
        }

        bool        operator!=  ( const Vec4D& other ) const
        {
            return !(*this == other);
        }

        Vec4D       operator+   ( const Vec4D& other ) const
        {
            return Vec4D ( X + other.X, Y + other.Y, Z + other.Z, W + other.W );
        }

        Vec4D       operator-   () const
        {
            return Vec4D ( -X, -Y, -Z, -W );
        }

        Vec4D       operator-   ( const Vec4D& other ) const
        {
            return Vec4D ( X - other.X, Y - other.Y, Z - other.Z, W - other.W );
        }

        float       X;
        float       Y;
        float       Z;
        float       W;
    };

}
