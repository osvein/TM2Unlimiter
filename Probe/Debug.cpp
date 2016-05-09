#include "StdInc.h"

using namespace ManiaPlanet;

void Debug::DumpControlTree ( CControlContainer* pRoot, int iIndent )
{
    DumpControlLine ( pRoot, iIndent );
    iIndent++;

    Array < CControlBase* >& children = pRoot->GetChilds ();
    for ( auto it = children.Begin (); it != children.End (); it++ )
    {
        if ( (*it)->Is ( CControlContainer::CLASSID ) )
            DumpControlTree ( nod_cast < CControlContainer* > ( *it ), iIndent );
        else
            DumpControlLine ( *it, iIndent );
    }
}

void Debug::DumpStylesheet ( ManiaPlanet::CControlStyleSheet* pStyleSheet )
{
    WriteLine ( L"Stylesheet %S", pStyleSheet->GetId ().Resolve () );
    List < nodptr<CMwNod> >& styles = pStyleSheet->GetBuffer ()->GetNods ();

    for ( auto it = styles.Begin (); it != styles.End (); it++ )
    {
        CControlStyle* pStyle = nod_cast < CControlStyle* > ( *it );
        if ( pStyle )
            DumpStyle ( pStyle );
    }
}

void Debug::DumpStyle ( ManiaPlanet::CControlStyle* pStyle )
{
    WriteLine ( L"    Style %S", pStyle->GetId ().Resolve () );
    WriteLine ( L"        Quad color: %s", pStyle->GetQuadGradientColor0 ().ToString ().c_str () );
}

void Debug::DumpControlLine ( CControlBase* pControl, int iIndent )
{
    static const char* ppszHAligns[] = {
        "left",
        "hcenter",
        "right",
        "none"
    };
    static const char* ppszVAligns[] = {
        "top",
        "vcenter",
        "bottom",
        "none",
        "vcenter2"
    };

    std::wstring wstrLine ( 4*iIndent, L' ' );
    wstrLine += StringUtil::Format (
        L"%S %S pos=(%.2f %.2f) size=(%.2f %.2f) align=(%S %S)",
        pControl->GetClassInfo ()->GetName (),
        pControl->GetId ().Resolve (),
        (pControl->GetBoxMin ().X + pControl->GetBoxMax ().X) / 2.0f,
        (pControl->GetBoxMin ().Y + pControl->GetBoxMax ().Y) / 2.0f,
        pControl->GetBoxMax ().X - pControl->GetBoxMin ().X,
        pControl->GetBoxMax ().Y - pControl->GetBoxMin ().Y,
        ppszHAligns [ pControl->GetAlignHorizontal () ],
        ppszVAligns [ pControl->GetAlignVertical () ]
    );
    if ( pControl->Is ( CControlLabel::CLASSID ) )
    {
        wstrLine += StringUtil::Format ( L" text=\"%s\"", nod_cast < CControlLabel* > ( pControl )->GetLabel ().CStr () );
    }
    else if ( pControl->Is ( CControlButton::CLASSID ) )
    {
        wstrLine += StringUtil::Format ( L" text=\"%s\"", nod_cast < CControlButton* > ( pControl )->GetLabel ().CStr () );
        wstrLine += StringUtil::Format ( L" script=%#08X", nod_cast < CControlButton* > ( pControl )->GetActionScript () );
    }
    else if ( pControl->Is ( CControlQuad::CLASSID ) )
    {
        wstrLine += StringUtil::Format ( L" icon=\"%S\"", nod_cast < CControlQuad* > ( pControl )->GetIconId ().Resolve () );
    }

    CControlStyle* pStyle = pControl->GetStyle ();
    if ( pStyle )
        wstrLine += StringUtil::Format ( L" style=\"%S\"", pStyle->GetId ().Resolve () );

    WriteLine ( wstrLine.c_str () );
}

void Debug::WriteLine ( const wchar_t* pwsz, ... )
{
    va_list va;
    va_start ( va, pwsz );
    std::wstring wstrMsg = StringUtil::FormatV ( pwsz, va );
    va_end ( va );
    OutputDebugStringW ( wstrMsg.c_str () );
}

void Debug::WriteLine ( const std::wstring wstr, ... )
{
    va_list va;
    va_start ( va, wstr );
    std::wstring wstrMsg = StringUtil::FormatV ( wstr.c_str (), va );
    va_end ( va );
    OutputDebugStringW ( wstrMsg.c_str () );
}
