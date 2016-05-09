#pragma once

class ResourceManager
{
public:
                                    ResourceManager         ();

    template < class T >
    T                               GetResource             ( const wchar_t* pwszFilePath )
    {
        LoadResources ();

        CSystemFidFile* pFid = m_pResourceDrive->GetFile ( pwszFilePath );
        if ( !pFid )
            return NULL;

        ManiaPlanet::CMwNod* pNod = pFid->GetCreateNod ();
        if ( !pNod )
            return NULL;

        if ( !pNod->Is ( _RemovePointer < T >::Type::CLASSID ) )
        {
            pNod->AddRef ();
            pNod->Release ();
            return NULL;
        }
        return nod_cast < T > ( pNod );
    }

private:
    void                            LoadResources           ();

    ManiaPlanet::CPlugFileZip*      m_pResourcePack;
    ManiaPlanet::CSystemFidsDrive*  m_pResourceDrive;
};
