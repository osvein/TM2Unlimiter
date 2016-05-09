#pragma once

namespace ManiaPlanet
{

    class CSystemFid;
    class CSystemFidsDrive;

    class CSystemFids : public CMwNod
    {
    public:
        #include "Generated/CSystemFids.Generated.h"

        CSystemFids*            GetParentFolder     () const    { return m_pParentFolder; }
        CSystemFidsDrive*       GetDrive            () const    { return m_pDrive; }

    protected:
        CSystemFids*            m_pParentFolder;
        CSystemFidsDrive*       m_pDrive;
        List < CSystemFid* >    m_Files;
        List < CSystemFids* >   m_Folders;
        uint                    m_field34;
    };

}
