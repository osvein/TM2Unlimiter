#pragma once

namespace ManiaPlanet
{

    struct uint3
    {
    public:
                    uint3           ()
        {
            X = 0;
            Y = 0;
            Z = 0;
        }

                    uint3           ( uint x, uint y, uint z )
        {
            X = x;
            Y = y;
            Z = z;
        }

                    uint3           ( const uint3& other )
        {
            *this = other;
        }

        uint3&      operator=       ( const uint3& other )
        {
            X = other.X;
            Y = other.Y;
            Z = other.Z;
            return *this;
        }

        bool        operator==      ( const uint3& other ) const
        {
            return X == other.X &&
                   Y == other.Y &&
                   Z == other.Z;
        }

        bool        operator!=      ( const uint3& other ) const
        {
            return !(*this == other);
        }

        uint3       operator+       ( const uint3& other ) const
        {
            return uint3 ( X + other.X,
                           Y + other.Y,
                           Z + other.Z );
        }

        uint3&      operator+=      ( const uint3& other )
        {
            X += other.X;
            Y += other.Y;
            Z += other.Z;
            return *this;
        }

        uint3       operator-       ( const uint3& other ) const
        {
            return uint3 ( X - other.X,
                           Y - other.Y,
                           Z - other.Z );
        }

        uint3&      operator-=      ( const uint3& other )
        {
            X -= other.X;
            Y -= other.Y;
            Z -= other.Z;
            return *this;
        }

        uint        X;
        uint        Y;
        uint        Z;
    };

}
