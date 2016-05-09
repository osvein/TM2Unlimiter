#pragma once

#define NOMINMAX
#include <Windows.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

typedef BYTE    byte;
typedef WORD    word;
typedef DWORD   dword;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long qword;

#include "StringUtil.h"
#include "Path.h"
#include "Directory.h"
#include "File.h"
#include "CommandLine.h"
#include "Log.h"
