#pragma once

#define NOMINMAX

#include <Windows.h>
#include <algorithm>
#include <assert.h>
#include <map>
#include <regex>
#include <set>
#include <string>
#include <sstream>
#include <vector>

typedef unsigned short ushort;
typedef unsigned int   uint;
typedef unsigned long  ulong;

typedef BYTE  byte;
typedef WORD  word;
typedef DWORD dword;

#include "../Vendor/Detours/detours.h"

#include "../Vendor/FastDelegate/FastDelegate.h"
#include "../Vendor/FastDelegate/FastDelegateBind.h"
using namespace fastdelegate;
#define delegate FastDelegate

#include "../Vendor/pugi/pugixml.hpp"

#include "Address.h"
#include "Util/CastUtil.h"

#include "ManiaPlanet/Allocatable.h"
#include "ManiaPlanet/String.h"
#include "ManiaPlanet/int3.h"
#include "ManiaPlanet/uint3.h"
#include "ManiaPlanet/color.h"
#include "ManiaPlanet/Vec2D.h"
#include "ManiaPlanet/Vec3D.h"
#include "ManiaPlanet/Vec4D.h"
#include "ManiaPlanet/Matrix33.h"
#include "ManiaPlanet/Matrix43.h"
#include "ManiaPlanet/Quaternion.h"
#include "ManiaPlanet/Rectangle.h"
#include "ManiaPlanet/Id.h"
#include "ManiaPlanet/NodMeta.h"
#include "ManiaPlanet/Array.h"
#include "ManiaPlanet/List.h"
#include "ManiaPlanet/CMwMemberInfo.h"
#include "ManiaPlanet/CMwClassMemberInfo.h"
#include "ManiaPlanet/CMwClassArrayMemberInfo.h"
#include "ManiaPlanet/CMwEnumMemberInfo.h"
#include "ManiaPlanet/CMwMethodMemberInfo.h"
#include "ManiaPlanet/CMwClassInfo.h"
#include "ManiaPlanet/CMwEngineInfo.h"
#include "ManiaPlanet/CMwEngineManager.h"
#include "ManiaPlanet/CMwStack.h"
#include "ManiaPlanet/CMwNod.h"
#include "ManiaPlanet/CClassicBuffer.h"
#include "ManiaPlanet/CClassicBufferMemory.h"
#include "ManiaPlanet/CClassicArchive.h"
#include "Util/NodUtil.h"
#include "ManiaPlanet/CGameCtnCollector.h"
#include "ManiaPlanet/CGameCtnCollection.h"
#include "ManiaPlanet/CGameCtnBlockUnitInfo.h"
#include "ManiaPlanet/CGameCtnBlockUnit.h"
#include "ManiaPlanet/CGameCtnBlockInfoVariant.h"
#include "ManiaPlanet/CGameCtnBlockInfo.h"
#include "ManiaPlanet/CGameCtnBlock.h"
#include "ManiaPlanet/BlockPlacementInfo.h"
#include "ManiaPlanet/CGameCtnDecorationSize.h"
#include "ManiaPlanet/CGameCtnDecoration.h"
#include "ManiaPlanet/CGameCtnChallenge.h"
#include "ManiaPlanet/CGameCtnEditor.h"
#include "ManiaPlanet/CMwCmdContainer.h"
#include "ManiaPlanet/CFunc.h"
#include "ManiaPlanet/CPlug.h"
#include "ManiaPlanet/CControlStyle.h"
#include "ManiaPlanet/StyleRef.h"
#include "ManiaPlanet/CSceneObject.h"
#include "ManiaPlanet/CSceneMobil.h"
#include "ManiaPlanet/CSceneToy.h"
#include "ManiaPlanet/CControlBase.h"
#include "ManiaPlanet/CGameProcess.h"
#include "ManiaPlanet/CGameApp.h"
#include "ManiaPlanet/CGameCtnApp.h"
#include "ManiaPlanet/CGbxApp.h"
#include "ManiaPlanet/CGbxGame.h"
#include "ManiaPlanet/CSystemFidParameters.h"
#include "ManiaPlanet/CSystemFids.h"
#include "ManiaPlanet/CSystemFidsFolder.h"
#include "ManiaPlanet/CSystemFid.h"
#include "ManiaPlanet/CSystemFidFile.h"
#include "ManiaPlanet/CSystemFidsDrive.h"
#include "ManiaPlanet/CPlugFile.h"
#include "ManiaPlanet/CPlugFileFidContainer.h"
#include "ManiaPlanet/CMwEngine.h"
#include "ManiaPlanet/CMwEngineMain.h"
#include "ManiaPlanet/CSystemEngine.h"

#include "ManiaPlanet/__maniaplanet.h"

#include "Util/StringUtil.h"
#include "Settings.h"
#include "ResourceManager.h"
#include "EditorExtensions.h"
#include "TM2Unlimiter.h"
#include "Hooks/HooksBase.h"
#include "Hooks/BlockMixHooks.h"
#include "Hooks/MapTaggingHooks.h"
#include "Hooks/UpdateHooks.h"
#include "Debug.h"
