#pragma once

class Debug
{
public:
    static void         DumpFileTree            (  );
    
    static void         DumpControlTree         ( ManiaPlanet::CControlContainer* pRoot, int iIndent = 0 );
    
    static void         DumpStylesheet          ( ManiaPlanet::CControlStyleSheet* pStyleSheet );
    static void         DumpStyle               ( ManiaPlanet::CControlStyle* pStyle );

    static void         WriteLine               ( const wchar_t* pwsz, ... );
    static void         WriteLine               ( const std::wstring wstr, ... );

private:
    static void         DumpControlLine         ( ManiaPlanet::CControlBase* pControl, int iIndent );
};
