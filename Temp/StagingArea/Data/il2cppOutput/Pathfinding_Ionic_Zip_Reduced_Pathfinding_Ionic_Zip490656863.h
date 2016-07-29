#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V1900668527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
struct  U3CGetEnumeratorU3Ec__Iterator0_t490656863  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<<$$>>__0
	Enumerator_t1900668527  ___U3CU3CU24U24U3EU3E__0_0;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<e>__1
	ZipEntry_t495942682 * ___U3CeU3E__1_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_2;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::$current
	ZipEntry_t495942682 * ___U24current_3;
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<>f__this
	ZipFile_t1967254086 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU3CU24U24U3EU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t490656863, ___U3CU3CU24U24U3EU3E__0_0)); }
	inline Enumerator_t1900668527  get_U3CU3CU24U24U3EU3E__0_0() const { return ___U3CU3CU24U24U3EU3E__0_0; }
	inline Enumerator_t1900668527 * get_address_of_U3CU3CU24U24U3EU3E__0_0() { return &___U3CU3CU24U24U3EU3E__0_0; }
	inline void set_U3CU3CU24U24U3EU3E__0_0(Enumerator_t1900668527  value)
	{
		___U3CU3CU24U24U3EU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t490656863, ___U3CeU3E__1_1)); }
	inline ZipEntry_t495942682 * get_U3CeU3E__1_1() const { return ___U3CeU3E__1_1; }
	inline ZipEntry_t495942682 ** get_address_of_U3CeU3E__1_1() { return &___U3CeU3E__1_1; }
	inline void set_U3CeU3E__1_1(ZipEntry_t495942682 * value)
	{
		___U3CeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t490656863, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t490656863, ___U24current_3)); }
	inline ZipEntry_t495942682 * get_U24current_3() const { return ___U24current_3; }
	inline ZipEntry_t495942682 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(ZipEntry_t495942682 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator0_t490656863, ___U3CU3Ef__this_4)); }
	inline ZipFile_t1967254086 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline ZipFile_t1967254086 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(ZipFile_t1967254086 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
