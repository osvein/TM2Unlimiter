#include "StdInc.h"

namespace ManiaPlanet
{

    char* StringA::ms_pszEmpty = Address::Inst.StringA__pszEmpty;
    wchar_t* StringW::ms_pszEmpty = Address::Inst.StringW__pwszEmpty;

    _declspec(naked) void StringA::Reserve ( dword dwCapacity, bool bKeepContent, char** ppOrigSz )
    {
        _asm jmp Address::Inst.StringA__Reserve
    }

    _declspec(naked) void StringW::Reserve ( dword dwCapacity, bool bKeepContent, wchar_t** ppOrigSz )
    {
        _asm jmp Address::Inst.StringW__Reserve
    }

}
