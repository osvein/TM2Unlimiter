#include "StdInc.h"

using namespace ManiaPlanet;

ResourceManager::ResourceManager ()
{
    m_pResourceDrive = NULL;
    m_pResourcePack = NULL;
}

void ResourceManager::LoadResources ()
{
    if ( m_pResourceDrive )
        return;

    m_pResourceDrive = CSystemFidsDrive::CreateInstance ();
    m_pResourceDrive->AddRef ();

    CSystemEngine* pSystemEngine = nod_cast < CSystemEngine* > (
        CMwEngineMain::GetInstance ()->GetEngine ( CMwEngine::ENGINE_SYSTEM ) );
    CSystemFidFile* pResourcePackFid = pSystemEngine->GetManiaPlanetDrive ()->GetFile ( L"Packs/TM2Unlimiter.zip" );
    
    m_pResourcePack = nod_cast < CPlugFileZip* > ( pResourcePackFid->GetCreateNod () );
    m_pResourcePack->AddRef ();
    m_pResourcePack->CreateFidStructure ( m_pResourceDrive, false );
}
