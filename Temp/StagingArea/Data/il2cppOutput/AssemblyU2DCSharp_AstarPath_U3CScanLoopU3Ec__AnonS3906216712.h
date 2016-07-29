#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnScanStatus
struct OnScanStatus_t2412749870;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstarPath/<ScanLoop>c__AnonStorey13
struct  U3CScanLoopU3Ec__AnonStorey13_t3906216712  : public Il2CppObject
{
public:
	// OnScanStatus AstarPath/<ScanLoop>c__AnonStorey13::statusCallback
	OnScanStatus_t2412749870 * ___statusCallback_0;

public:
	inline static int32_t get_offset_of_statusCallback_0() { return static_cast<int32_t>(offsetof(U3CScanLoopU3Ec__AnonStorey13_t3906216712, ___statusCallback_0)); }
	inline OnScanStatus_t2412749870 * get_statusCallback_0() const { return ___statusCallback_0; }
	inline OnScanStatus_t2412749870 ** get_address_of_statusCallback_0() { return &___statusCallback_0; }
	inline void set_statusCallback_0(OnScanStatus_t2412749870 * value)
	{
		___statusCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___statusCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
