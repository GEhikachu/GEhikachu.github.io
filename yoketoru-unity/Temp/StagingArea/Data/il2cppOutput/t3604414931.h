﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1254504477;

#include "t1711298336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3604414931  : public t1711298336
{
public:
	t1254504477 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3604414931, f0)); }
	inline t1254504477 * fg0() const { return f0; }
	inline t1254504477 ** fag0() { return &f0; }
	inline void fs0(t1254504477 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
