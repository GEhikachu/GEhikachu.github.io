﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3584770679;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1015804197  : public Il2CppObject
{
public:

public:
};

struct t1015804197_SFs
{
public:
	t3584770679 * f0;
	t3584770679 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1015804197_SFs, f0)); }
	inline t3584770679 * fg0() const { return f0; }
	inline t3584770679 ** fag0() { return &f0; }
	inline void fs0(t3584770679 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1015804197_SFs, f1)); }
	inline t3584770679 * fg1() const { return f1; }
	inline t3584770679 ** fag1() { return &f1; }
	inline void fs1(t3584770679 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
