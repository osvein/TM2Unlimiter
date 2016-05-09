#include "StdInc.h"

using namespace ManiaPlanet;

bool CGameCtnChallenge::IsPositionInRange ( uint3 pos ) const
{
    return pos.X < m_Size.X &&
           pos.Y < m_Size.Y &&
           pos.Z < m_Size.Z;
}

CGameCtnBlockUnit* CGameCtnChallenge::GetBlockUnitAtPos ( uint3 pos )
{
    if ( !IsPositionInRange ( pos ) )
        return NULL;

    List < CGameCtnBlockUnit* >* pBlockUnitColumn = m_BlockUnitColumns [ pos.X * m_Size.Z + pos.Z ];
    if ( pos.Y >= pBlockUnitColumn->Size () )
        return NULL;

    return (*pBlockUnitColumn) [ pos.Y ];
}

CGameCtnBlock* CGameCtnChallenge::GetBlockAtPos ( uint3 pos )
{
    CGameCtnBlockUnit* pUnit = GetBlockUnitAtPos ( pos );
    if ( !pUnit )
        return NULL;

    return pUnit->GetBlock ();
}

void CGameCtnChallenge::RelinkBlockUnits ()
{
    for ( uint i = 0; i < m_Blocks.Size (); i++ )
    {
        CGameCtnBlock* pBlock = m_Blocks [ i ];
        for ( uint j = 0; j < pBlock->NumBlockUnits (); j++ )
        {
            CGameCtnBlockUnit* pBlockUnit = pBlock->GetBlockUnit ( j );
            if ( pBlockUnit->GetBlock ()->GetBlockInfo ()->Is ( CGameCtnBlockInfoFlat::CLASSID ) )
                continue;

            uint3 pos = pBlockUnit->GetPosition ();
            List < CGameCtnBlockUnit* >* pBlockUnitColumn = m_BlockUnitColumns [ pos.X * m_Size.Z + pos.Z ];
            while ( pos.Y >= pBlockUnitColumn->Size () )
                pBlockUnitColumn->Add ( NULL );

            (*pBlockUnitColumn) [ pos.Y ] = pBlockUnit;
        }
    }
}
