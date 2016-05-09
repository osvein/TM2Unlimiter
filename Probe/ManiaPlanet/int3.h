#pragma once

namespace ManiaPlanet
{

    struct int3
    {
    public:
                int3        ()
        {
            X = 0;
            Y = 0;
            Z = 0;
        }

                int3        ( int x, int y, int z )
        {
            X = x;
            Y = y;
            Z = z;
        }

        int     X;
        int     Y;
        int     Z;
    };

}
