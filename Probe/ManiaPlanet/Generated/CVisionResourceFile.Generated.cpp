#include "StdInc.h"

namespace ManiaPlanet
{

    CVisionResourceFile* CVisionResourceFile::CreateInstance ()
    {
        return static_cast < CVisionResourceFile* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredFaceNormalInC () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredFaceNormalInC" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredFaceNormalInC ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredFaceNormalInC" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredLightMask () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredLightMask" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredLightMask ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredLightMask" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredMDiffuse () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredMDiffuse" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredMDiffuse ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredMDiffuse" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredMSpecular () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredMSpecular" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredMSpecular ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredMSpecular" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredPixelNormalInC () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredPixelNormalInC" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredPixelNormalInC ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredPixelNormalInC" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredPreShade () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredPreShade" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredPreShade ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredPreShade" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredVertexNormalInC () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredVertexNormalInC" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredVertexNormalInC ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredVertexNormalInC" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapDeferredZ () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredZ" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapDeferredZ ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapDeferredZ" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapImageSpaceReflectCube () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapImageSpaceReflectCube" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapImageSpaceReflectCube ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapImageSpaceReflectCube" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapReflectCubeHdr () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapReflectCubeHdr" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapReflectCubeHdr ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapReflectCubeHdr" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapReflectCubeHdrLQ () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapReflectCubeHdrLQ" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapReflectCubeHdrLQ ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapReflectCubeHdrLQ" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapShadowLDir0 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapShadowLDir0" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapShadowLDir0 ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapShadowLDir0" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapTranslucentDown () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapTranslucentDown" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapTranslucentDown ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapTranslucentDown" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapVehicleLAmbientSH3 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapVehicleLAmbientSH3" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapVehicleLAmbientSH3 ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapVehicleLAmbientSH3" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugBitmap* CVisionResourceFile::GetBitmapWaterRefract () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapWaterRefract" );
        class CPlugBitmap* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetBitmapWaterRefract ( class CPlugBitmap* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BitmapWaterRefract" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    float CVisionResourceFile::GetBlurDepthTestMaxDist () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlurDepthTestMaxDist" );
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

    void CVisionResourceFile::SetBlurDepthTestMaxDist ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BlurDepthTestMaxDist" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CSystemFidsFolder* CVisionResourceFile::GetFolderShaderBench () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FolderShaderBench" );
        class CSystemFidsFolder* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetFolderShaderBench ( class CSystemFidsFolder* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FolderShaderBench" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFont* CVisionResourceFile::GetFontDebugText () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FontDebugText" );
        class CPlugFont* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetFontDebugText ( class CPlugFont* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FontDebugText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFxLensFlareArray* CVisionResourceFile::GetFxLensFlareArray () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FxLensFlareArray" );
        class CPlugFxLensFlareArray* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetFxLensFlareArray ( class CPlugFxLensFlareArray* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FxLensFlareArray" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslBlurHV () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslBlurHV ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslBlurHV_DepthMask () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV_DepthMask" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslBlurHV_DepthMask ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV_DepthMask" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslBlurHV_DepthTest () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV_DepthTest" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslBlurHV_DepthTest ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslBlurHV_DepthTest" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslDebugText () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslDebugText" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslDebugText ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslDebugText" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslFillAlpha () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillAlpha" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslFillAlpha ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillAlpha" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslFillColor () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillColor" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslFillColor ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillColor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslFillColor_Alpha01 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillColor_Alpha01" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslFillColor_Alpha01 ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillColor_Alpha01" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslFillConst () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillConst" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslFillConst ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillConst" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslFillDepthMask () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillDepthMask" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslFillDepthMask ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslFillDepthMask" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFilePHlsl* CVisionResourceFile::GetPHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2" );
        class CPlugFilePHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetPHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2 ( class CPlugFilePHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShader2dFlareAdd_Hdr () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dFlareAdd_Hdr" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShader2dFlareAdd_Hdr ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dFlareAdd_Hdr" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShader2dLensDirtAdd () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dLensDirtAdd" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShader2dLensDirtAdd ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dLensDirtAdd" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShader2dLightHistoryUpdate () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dLightHistoryUpdate" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShader2dLightHistoryUpdate ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Shader2dLightHistoryUpdate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderBlendBitmapPreMod () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapPreMod" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderBlendBitmapPreMod ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapPreMod" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderBlendBitmapPreModInvA () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapPreModInvA" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderBlendBitmapPreModInvA ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapPreModInvA" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderBlendBitmapRGB () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapRGB" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderBlendBitmapRGB ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapRGB" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderBlendBitmapRGBA () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapRGBA" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderBlendBitmapRGBA ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderBlendBitmapRGBA" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderCubeFilterDown4x4_Cube3x2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderCubeFilterDown4x4_Cube3x2" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderCubeFilterDown4x4_Cube3x2 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderCubeFilterDown4x4_Cube3x2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderCubeToSphereHdrA2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderCubeToSphereHdrA2" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderCubeToSphereHdrA2 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderCubeToSphereHdrA2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDecal3dSetInvalid () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDecal3dSetInvalid" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDecal3dSetInvalid ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDecal3dSetInvalid" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredBurnSphere () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredBurnSphere" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredBurnSphere ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredBurnSphere" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredCameraMotion () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredCameraMotion" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredCameraMotion ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredCameraMotion" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredDeCompFaceNormal () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDeCompFaceNormal" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredDeCompFaceNormal ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDeCompFaceNormal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredDecal () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecal" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredDecal ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecal" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredDecalBox () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecalBox" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredDecalBox ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecalBox" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredDecalBoxVConst () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecalBoxVConst" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredDecalBoxVConst ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredDecalBoxVConst" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredFog () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredFog" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredFog ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredFog" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredGeomCameraMap () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomCameraMap" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredGeomCameraMap ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomCameraMap" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredGeomFogBoxInside () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomFogBoxInside" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredGeomFogBoxInside ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomFogBoxInside" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredGeomFogBoxOutside () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomFogBoxOutside" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredGeomFogBoxOutside ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomFogBoxOutside" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredGeomProjector () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomProjector" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredGeomProjector ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomProjector" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredGeomShadowVol () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomShadowVol" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredGeomShadowVol ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredGeomShadowVol" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredLightBall () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightBall" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredLightBall ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightBall" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredLightFxCylinder () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightFxCylinder" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredLightFxCylinder ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightFxCylinder" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredLightFxSphere () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightFxSphere" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredLightFxSphere ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightFxSphere" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredLightSpot () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightSpot" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredLightSpot ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredLightSpot" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredOccZCmp () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredOccZCmp" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredOccZCmp ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredOccZCmp" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredShadowPssm () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredShadowPssm" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredShadowPssm ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredShadowPssm" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredWaterFog () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredWaterFog" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredWaterFog ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredWaterFog" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDeferredZBufferToDist01 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredZBufferToDist01" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDeferredZBufferToDist01 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDeferredZBufferToDist01" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDownSize2x2AvgInLdr () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDownSize2x2AvgInLdr" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDownSize2x2AvgInLdr ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDownSize2x2AvgInLdr" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderDownSize3x3AvgInLdr () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDownSize3x3AvgInLdr" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderDownSize3x3AvgInLdr ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderDownSize3x3AvgInLdr" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderFaceNormalFromLinearDepth () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderFaceNormalFromLinearDepth" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderFaceNormalFromLinearDepth ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderFaceNormalFromLinearDepth" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderFilterDown4x4 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderFilterDown4x4" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderFilterDown4x4 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderFilterDown4x4" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderGeomBlendWaterFog () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomBlendWaterFog" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderGeomBlendWaterFog ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomBlendWaterFog" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderGeomBlendWaterFog_Opacity01 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomBlendWaterFog_Opacity01" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderGeomBlendWaterFog_Opacity01 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomBlendWaterFog_Opacity01" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderGeomToReflectCubeDist () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomToReflectCubeDist" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderGeomToReflectCubeDist ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderGeomToReflectCubeDist" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderMgrParticleRender () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleRender" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderMgrParticleRender ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleRender" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderMgrParticleShowStates () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleShowStates" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderMgrParticleShowStates ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleShowStates" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderMgrParticleSpawn () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleSpawn" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderMgrParticleSpawn ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleSpawn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderMgrParticleSpawnPoints () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleSpawnPoints" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderMgrParticleSpawnPoints ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleSpawnPoints" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderMgrParticleUpdate () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleUpdate" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderMgrParticleUpdate ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderMgrParticleUpdate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderProjectCube48x32_SH3 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderProjectCube48x32_SH3" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderProjectCube48x32_SH3 ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderProjectCube48x32_SH3" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderRasterDistor2d () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderRasterDistor2d" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderRasterDistor2d ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderRasterDistor2d" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugShaderApply* CVisionResourceFile::GetShaderT3FullDeferredWarp () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderT3FullDeferredWarp" );
        class CPlugShaderApply* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetShaderT3FullDeferredWarp ( class CPlugShaderApply* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ShaderT3FullDeferredWarp" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslBlurHV () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslBlurHV" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslBlurHV ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslBlurHV" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslFillAlpha () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFillAlpha" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslFillAlpha ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFillAlpha" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslFillDepthMask () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFillDepthMask" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslFillDepthMask ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFillDepthMask" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslFill_0000 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0000" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslFill_0000 ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0000" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslFill_0001 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0001" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslFill_0001 ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0001" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslFill_0001_Alpha01 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0001_Alpha01" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslFill_0001_Alpha01 ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslFill_0001_Alpha01" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslLensFlareOccQuery () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslLensFlareOccQuery" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslLensFlareOccQuery ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslLensFlareOccQuery" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslProjector1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslProjector1" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslProjector1 ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslProjector1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CPlugFileVHlsl* CVisionResourceFile::GetVHlslRasterCubeMapFromEyeVectInWorld () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslRasterCubeMapFromEyeVectInWorld" );
        class CPlugFileVHlsl* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CVisionResourceFile::SetVHlslRasterCubeMapFromEyeVectInWorld ( class CPlugFileVHlsl* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "VHlslRasterCubeMapFromEyeVectInWorld" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
