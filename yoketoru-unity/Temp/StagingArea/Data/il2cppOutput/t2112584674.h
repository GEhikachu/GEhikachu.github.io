﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2994972632;

#include "t1711298336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2112584674  : public t1711298336
{
public:
	t2994972632 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2112584674, f0)); }
	inline t2994972632 * fg0() const { return f0; }
	inline t2994972632 ** fag0() { return &f0; }
	inline void fs0(t2994972632 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
