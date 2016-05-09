#pragma once

#define NOMINMAX

#include <stdio.h>
#include <Windows.h>
#include <WinInet.h>
#include <string>

typedef unsigned short ushort;
typedef unsigned int   uint;
typedef unsigned long  ulong;

typedef BYTE  byte;
typedef WORD  word;
typedef DWORD dword;

#include "../Vendor/Detours/detours.h"
#include "../Vendor/pugi/pugixml.hpp"
#include "../Vendor/zlib/zlib.h"
#include "../Vendor/minizip/unzip.h"
#include "CCRC32.h"

#include "../util/StdInc.h"

#include "Updater.h"
