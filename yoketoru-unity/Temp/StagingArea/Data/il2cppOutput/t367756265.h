﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3070427539;

#include "t4028081426.h"
#include "t1627747851.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t367756265 
{
public:
	t3070427539 * f0;
	int32_t f1;
	int32_t f2;
	t1627747851  f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t367756265, f0)); }
	inline t3070427539 * fg0() const { return f0; }
	inline t3070427539 ** fag0() { return &f0; }
	inline void fs0(t3070427539 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t367756265, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t367756265, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t367756265, f3)); }
	inline t1627747851  fg3() const { return f3; }
	inline t1627747851 * fag3() { return &f3; }
	inline void fs3(t1627747851  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
