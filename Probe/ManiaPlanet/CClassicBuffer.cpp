#include "StdInc.h"

namespace ManiaPlanet
{

	void CClassicBuffer::WriteTo ( CClassicBuffer* pOther )
	{
		byte ucBuffer [ 1024 ];
		int iSize;
		while ( iSize = ReadBytes ( ucBuffer, std::min(GetSize() - GetPosition(), sizeof(ucBuffer)) ) )
		{
			pOther->WriteBytes ( ucBuffer, iSize );
		}
	}

}
