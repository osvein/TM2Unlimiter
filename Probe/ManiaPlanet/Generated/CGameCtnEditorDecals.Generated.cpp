#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorDecals* CGameCtnEditorDecals::CreateInstance ()
    {
        return static_cast < CGameCtnEditorDecals* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameCtnEditorDecals::EditionModeToString ( eEditionMode value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EditionMode" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameCtnEditorDecals::eEditionMode CGameCtnEditorDecals::ParseEditionMode ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EditionMode" );
        return (eEditionMode)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    class CPlugBitmap* CGameCtnEditorDecals::GetBitmap () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Bitmap" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetBitmap ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Bitmap" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CGameCtnEditorDecals::GetBitmapDecalSet () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSet" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetBitmapDecalSet ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSet" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnDecalsBrush* CGameCtnEditorDecals::GetBrushModify () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushModify" );
        class CGameCtnDecalsBrush* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetBrushModify ( class CGameCtnDecalsBrush* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushModify" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameCtnDecalsBrush* CGameCtnEditorDecals::GetBrushPlace () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushPlace" );
        class CGameCtnDecalsBrush* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetBrushPlace ( class CGameCtnDecalsBrush* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushPlace" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CSceneDecalsManager* CGameCtnEditorDecals::GetDecalsMgr () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DecalsMgr" );
        class CSceneDecalsManager* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetDecalsMgr ( class CSceneDecalsManager* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DecalsMgr" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    float CGameCtnEditorDecals::GetDensity () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Density" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetDensity ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Density" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGameCtnEditorDecals::eEditionMode CGameCtnEditorDecals::GetEditionMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditionMode" );
        struct
        {
            eEditionMode* pResult;
            eEditionMode storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetEditionMode ( CGameCtnEditorDecals::eEditionMode value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditionMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGameCtnEditorDecals::GetEffectFlickerFrequency () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EffectFlickerFrequency" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetEffectFlickerFrequency ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EffectFlickerFrequency" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnChallenge* CGameCtnEditorDecals::GetMergeFromChallenge () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MergeFromChallenge" );
        class CGameCtnChallenge* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetMergeFromChallenge ( class CGameCtnChallenge* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MergeFromChallenge" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    uint CGameCtnEditorDecals::GetNbDecals () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbDecals" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetNbDecals ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbDecals" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGameCtnEditorDecals::GetNbDecalsInBrush () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbDecalsInBrush" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetNbDecalsInBrush ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbDecalsInBrush" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CScene* CGameCtnEditorDecals::GetScene () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scene" );
        class CScene* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameCtnEditorDecals::SetScene ( class CScene* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scene" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CGameCtnEditorDecals::GetShowHelpers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowHelpers" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetShowHelpers ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShowHelpers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameCtnEditorDecals::GetTestDensity () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TestDensity" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetTestDensity ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TestDensity" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGameCtnEditorDecals::GetUVDistMax () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UVDistMax" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameCtnEditorDecals::SetUVDistMax ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UVDistMax" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGameCtnEditorDecals::BitmapCellGridShowHide ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapCellGridShowHide" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetAdd ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetAdd" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetDuplicate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetDuplicate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetFlipX ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetFlipX" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetNext ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetNext" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetPrev ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetPrev" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetRemove ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetRemove" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetRemoveInvalidDecals ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetRemoveInvalidDecals" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetRemoveInvalidDecalsAllSets ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetRemoveInvalidDecalsAllSets" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapDecalSetRemoveTooCloseDecals ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDecalSetRemoveTooCloseDecals" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapEditionPlaneShowHide ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapEditionPlaneShowHide" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BitmapSave ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapSave" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushApply ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushApply" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushFlipU ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushFlipU" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushModelOrAtlasInc ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushModelOrAtlasInc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushModelOrAtlasPrev ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushModelOrAtlasPrev" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushOpacityDec ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushOpacityDec" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushOpacityInc ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushOpacityInc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushPickMulti ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushPickMulti" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushPickSimple ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushPickSimple" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushReset ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushReset" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushRollDec ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushRollDec" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushRollInc ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushRollInc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushSizeDec ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushSizeDec" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushSizeInc ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushSizeInc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushSwitchProj ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushSwitchProj" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushThicknessDec ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushThicknessDec" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::BrushThicknessInc ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BrushThicknessInc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::DecalBoxesShowHide ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DecalBoxesShowHide" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::DecalFillZone ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DecalFillZone" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::DecalSnapOnOff ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DecalSnapOnOff" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::EditionModeModify ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditionModeModify" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::EditionModePlace ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EditionModePlace" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::SceneBitmapsDecals_Create ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneBitmapsDecals_Create" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::SceneBitmapsDecals_Destroy ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SceneBitmapsDecals_Destroy" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::SnapOnLandscape ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SnapOnLandscape" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::Undo_Clear ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Undo_Clear" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::Undo_Forward ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Undo_Forward" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CGameCtnEditorDecals::Undo_Rewind ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Undo_Rewind" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
