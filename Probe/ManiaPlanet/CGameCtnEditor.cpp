#include "StdInc.h"

namespace ManiaPlanet
{

    _declspec(naked) void CGameCtnEditor::AddBlock ( CGameCtnBlockInfo* pBlock, CGameCtnBlockSkin* pSkin, uint3 vecPos, int iDir, bool bGround, int iVariant, int iSubVariant, int iUnknown1, int iUnknown2 )
    {
        _asm jmp Address::Inst.CGameCtnEditor__AddBlock
    }

}
