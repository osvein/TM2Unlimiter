#pragma once

class Updater
{
public:
                    Updater                     ( const wchar_t* pwszProductName, uint uiThisVersionCrc );

    enum eStatus
    {
        STATUS_OK,
        STATUS_UPDATED,
        ERROR_TARGET_MISSING,
        ERROR_GET_VERSIONS,
        ERROR_NO_MATCHING_VERSION,
        ERROR_UPDATE_FAILED
    };

    void            DeleteOldFiles              ();
    eStatus         UpdateIfNeeded              ( const wchar_t* pwszCrcSourceFilePath );

private:
    eStatus         GetVersionForCrc            ( uint uiCrc, std::wstring& wstrVersion );
    eStatus         UpdateToVersion             ( const std::wstring& wstrVersion );
    void            ExtractFile                 ( unzFile pZipFile );

    std::string     DownloadString              ( const wchar_t* pszUrl );

    std::wstring    m_wstrProductName;
    uint            m_uiThisVersionCrc;
};
