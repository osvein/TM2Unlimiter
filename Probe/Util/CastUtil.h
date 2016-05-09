#pragma once

template < class TFrom, class TTo >
TTo union_cast ( TFrom from )
{
    union
    {
        TFrom from;
        TTo to;
    } u;
    u.from = from;
    return u.to;
}
