﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4011263879;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t189972673  : public Il2CppObject
{
public:
	t4011263879* f1;
	int32_t f2;
	int32_t f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t189972673, f1)); }
	inline t4011263879* fg1() const { return f1; }
	inline t4011263879** fag1() { return &f1; }
	inline void fs1(t4011263879* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t189972673, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t189972673, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t189972673_SFs
{
public:
	t4011263879* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t189972673_SFs, f4)); }
	inline t4011263879* fg4() const { return f4; }
	inline t4011263879** fag4() { return &f4; }
	inline void fs4(t4011263879* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
