﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t844189383;
struct t3435983175;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2835908158  : public Il2CppObject
{
public:
	t844189383 * f0;
	t3435983175 * f1;
	t3435983175 * f2;
	int32_t f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2835908158, f0)); }
	inline t844189383 * fg0() const { return f0; }
	inline t844189383 ** fag0() { return &f0; }
	inline void fs0(t844189383 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2835908158, f1)); }
	inline t3435983175 * fg1() const { return f1; }
	inline t3435983175 ** fag1() { return &f1; }
	inline void fs1(t3435983175 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2835908158, f2)); }
	inline t3435983175 * fg2() const { return f2; }
	inline t3435983175 ** fag2() { return &f2; }
	inline void fs2(t3435983175 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2835908158, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
