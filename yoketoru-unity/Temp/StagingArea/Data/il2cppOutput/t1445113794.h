﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1445113794 
{
public:
	Il2CppObject * f0;
	Il2CppObject * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1445113794, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1445113794, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Collections.DictionaryEntry
struct t1445113794_marshaled_com
{
	Il2CppIUnknown* f0;
	Il2CppIUnknown* f1;
};
