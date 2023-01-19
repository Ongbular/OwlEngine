#pragma once

#include "Logger/Logger.h"
#include "Logger/ScopedLogLevel.h"
#include "Misc/Paths.h"
#include "Delegate/UniCastDelegate.h"
#include "Delegate/MultiCastDelegate.h"

#include "CoreTypes.h"
#include "CoreAssert.h"

using namespace joo;

namespace Core
{
	void CORE_API InstallUnhandledExceptionFilter();
}