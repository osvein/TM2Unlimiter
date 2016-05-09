#pragma once

namespace ManiaPlanet
{

    struct Vec3D
    {
    public:
                    Vec3D       ()
        {
            X = 0.0f;
            Y = 0.0f;
            Z = 0.0f;
        }

                    Vec3D       ( float fX, float fY, float fZ )
        {
            X = fX;
            Y = fY;
            Z = fZ;
        }

                    Vec3D       ( const Vec3D& other )
        {
            *this = other;
        }

        Vec3D&      operator=   ( const Vec3D& other )
        {
            X = other.X;
            Y = other.Y;
            Z = other.Z;
            return *this;
        }

        bool        operator==  ( const Vec3D& other ) const
        {
            return X == other.X &&
                   Y == other.Y &&
                   Z == other.Z;
        }

        bool        operator!=  ( const Vec3D& other ) const
        {
            return !(*this == other);
        }

        Vec3D       operator+   ( const Vec3D& other ) const
        {
            return Vec3D ( X + other.X, Y + other.Y, Z + other.Z );
        }

        Vec3D       operator-   () const
        {
            return Vec3D ( -X, -Y, -Z );
        }

        Vec3D       operator-   ( const Vec3D& other ) const
        {
            return Vec3D ( X - other.X, Y - other.Y, Z - other.Z );
        }

        float       X;
        float       Y;
        float       Z;
    };

}
