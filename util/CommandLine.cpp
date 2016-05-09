#include "StdInc.h"

std::vector < std::wstring > CommandLine::GetArguments ()
{
    std::vector < std::wstring > result;
    const wchar_t* pwszArg = GetCommandLine ();
    const wchar_t* pwszArgEnd;
    while ( pwszArg && *pwszArg )
    {
        while ( *pwszArg == L' ' )
        {
            pwszArg++;
        }

        if ( *pwszArg == L'"' )
        {
            pwszArg++;
            pwszArgEnd = wcschr ( pwszArg, L'"' );
        }
        else
        {
            pwszArgEnd = wcschr ( pwszArg, L' ' );
        }
        if ( !pwszArgEnd )
            pwszArgEnd = pwszArg + wcslen ( pwszArg );

        result.push_back ( std::wstring ( pwszArg, pwszArgEnd ) );
        pwszArg = pwszArgEnd;
        if ( *pwszArg == '"' )
            pwszArg++;
    }
    return result;
}
