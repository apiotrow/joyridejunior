#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3244577588;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1539766221;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonWriter
struct  JsonWriter_t2278751729  : public Il2CppObject
{
public:
	// System.IO.TextWriter Pathfinding.Serialization.JsonFx.JsonWriter::Writer
	TextWriter_t1689927879 * ___Writer_0;
	// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::settings
	JsonWriterSettings_t3244577588 * ___settings_1;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriter::depth
	int32_t ___depth_2;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Pathfinding.Serialization.JsonFx.JsonWriter::previouslySerializedObjects
	Dictionary_2_t1539766221 * ___previouslySerializedObjects_3;

public:
	inline static int32_t get_offset_of_Writer_0() { return static_cast<int32_t>(offsetof(JsonWriter_t2278751729, ___Writer_0)); }
	inline TextWriter_t1689927879 * get_Writer_0() const { return ___Writer_0; }
	inline TextWriter_t1689927879 ** get_address_of_Writer_0() { return &___Writer_0; }
	inline void set_Writer_0(TextWriter_t1689927879 * value)
	{
		___Writer_0 = value;
		Il2CppCodeGenWriteBarrier(&___Writer_0, value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(JsonWriter_t2278751729, ___settings_1)); }
	inline JsonWriterSettings_t3244577588 * get_settings_1() const { return ___settings_1; }
	inline JsonWriterSettings_t3244577588 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(JsonWriterSettings_t3244577588 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier(&___settings_1, value);
	}

	inline static int32_t get_offset_of_depth_2() { return static_cast<int32_t>(offsetof(JsonWriter_t2278751729, ___depth_2)); }
	inline int32_t get_depth_2() const { return ___depth_2; }
	inline int32_t* get_address_of_depth_2() { return &___depth_2; }
	inline void set_depth_2(int32_t value)
	{
		___depth_2 = value;
	}

	inline static int32_t get_offset_of_previouslySerializedObjects_3() { return static_cast<int32_t>(offsetof(JsonWriter_t2278751729, ___previouslySerializedObjects_3)); }
	inline Dictionary_2_t1539766221 * get_previouslySerializedObjects_3() const { return ___previouslySerializedObjects_3; }
	inline Dictionary_2_t1539766221 ** get_address_of_previouslySerializedObjects_3() { return &___previouslySerializedObjects_3; }
	inline void set_previouslySerializedObjects_3(Dictionary_2_t1539766221 * value)
	{
		___previouslySerializedObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___previouslySerializedObjects_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
