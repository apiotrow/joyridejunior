#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t2945431428;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t4204471424;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonReader
struct  JsonReader_t2123346497  : public Il2CppObject
{
public:
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.JsonFx.JsonReader::Settings
	JsonReaderSettings_t2945431428 * ___Settings_8;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::Source
	String_t* ___Source_9;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::SourceLength
	int32_t ___SourceLength_10;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::index
	int32_t ___index_11;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Serialization.JsonFx.JsonReader::previouslyDeserialized
	List_1_t1634065389 * ___previouslyDeserialized_12;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>> Pathfinding.Serialization.JsonFx.JsonReader::jsArrays
	Stack_1_t4204471424 * ___jsArrays_13;

public:
	inline static int32_t get_offset_of_Settings_8() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___Settings_8)); }
	inline JsonReaderSettings_t2945431428 * get_Settings_8() const { return ___Settings_8; }
	inline JsonReaderSettings_t2945431428 ** get_address_of_Settings_8() { return &___Settings_8; }
	inline void set_Settings_8(JsonReaderSettings_t2945431428 * value)
	{
		___Settings_8 = value;
		Il2CppCodeGenWriteBarrier(&___Settings_8, value);
	}

	inline static int32_t get_offset_of_Source_9() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___Source_9)); }
	inline String_t* get_Source_9() const { return ___Source_9; }
	inline String_t** get_address_of_Source_9() { return &___Source_9; }
	inline void set_Source_9(String_t* value)
	{
		___Source_9 = value;
		Il2CppCodeGenWriteBarrier(&___Source_9, value);
	}

	inline static int32_t get_offset_of_SourceLength_10() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___SourceLength_10)); }
	inline int32_t get_SourceLength_10() const { return ___SourceLength_10; }
	inline int32_t* get_address_of_SourceLength_10() { return &___SourceLength_10; }
	inline void set_SourceLength_10(int32_t value)
	{
		___SourceLength_10 = value;
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_previouslyDeserialized_12() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___previouslyDeserialized_12)); }
	inline List_1_t1634065389 * get_previouslyDeserialized_12() const { return ___previouslyDeserialized_12; }
	inline List_1_t1634065389 ** get_address_of_previouslyDeserialized_12() { return &___previouslyDeserialized_12; }
	inline void set_previouslyDeserialized_12(List_1_t1634065389 * value)
	{
		___previouslyDeserialized_12 = value;
		Il2CppCodeGenWriteBarrier(&___previouslyDeserialized_12, value);
	}

	inline static int32_t get_offset_of_jsArrays_13() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497, ___jsArrays_13)); }
	inline Stack_1_t4204471424 * get_jsArrays_13() const { return ___jsArrays_13; }
	inline Stack_1_t4204471424 ** get_address_of_jsArrays_13() { return &___jsArrays_13; }
	inline void set_jsArrays_13(Stack_1_t4204471424 * value)
	{
		___jsArrays_13 = value;
		Il2CppCodeGenWriteBarrier(&___jsArrays_13, value);
	}
};

struct JsonReader_t2123346497_StaticFields
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralFalse
	String_t* ___LiteralFalse_0;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralTrue
	String_t* ___LiteralTrue_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNull
	String_t* ___LiteralNull_2;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralUndefined
	String_t* ___LiteralUndefined_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNotANumber
	String_t* ___LiteralNotANumber_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralPositiveInfinity
	String_t* ___LiteralPositiveInfinity_5;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNegativeInfinity
	String_t* ___LiteralNegativeInfinity_6;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::TypeGenericIDictionary
	String_t* ___TypeGenericIDictionary_7;

public:
	inline static int32_t get_offset_of_LiteralFalse_0() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralFalse_0)); }
	inline String_t* get_LiteralFalse_0() const { return ___LiteralFalse_0; }
	inline String_t** get_address_of_LiteralFalse_0() { return &___LiteralFalse_0; }
	inline void set_LiteralFalse_0(String_t* value)
	{
		___LiteralFalse_0 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralFalse_0, value);
	}

	inline static int32_t get_offset_of_LiteralTrue_1() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralTrue_1)); }
	inline String_t* get_LiteralTrue_1() const { return ___LiteralTrue_1; }
	inline String_t** get_address_of_LiteralTrue_1() { return &___LiteralTrue_1; }
	inline void set_LiteralTrue_1(String_t* value)
	{
		___LiteralTrue_1 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralTrue_1, value);
	}

	inline static int32_t get_offset_of_LiteralNull_2() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralNull_2)); }
	inline String_t* get_LiteralNull_2() const { return ___LiteralNull_2; }
	inline String_t** get_address_of_LiteralNull_2() { return &___LiteralNull_2; }
	inline void set_LiteralNull_2(String_t* value)
	{
		___LiteralNull_2 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralNull_2, value);
	}

	inline static int32_t get_offset_of_LiteralUndefined_3() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralUndefined_3)); }
	inline String_t* get_LiteralUndefined_3() const { return ___LiteralUndefined_3; }
	inline String_t** get_address_of_LiteralUndefined_3() { return &___LiteralUndefined_3; }
	inline void set_LiteralUndefined_3(String_t* value)
	{
		___LiteralUndefined_3 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralUndefined_3, value);
	}

	inline static int32_t get_offset_of_LiteralNotANumber_4() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralNotANumber_4)); }
	inline String_t* get_LiteralNotANumber_4() const { return ___LiteralNotANumber_4; }
	inline String_t** get_address_of_LiteralNotANumber_4() { return &___LiteralNotANumber_4; }
	inline void set_LiteralNotANumber_4(String_t* value)
	{
		___LiteralNotANumber_4 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralNotANumber_4, value);
	}

	inline static int32_t get_offset_of_LiteralPositiveInfinity_5() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralPositiveInfinity_5)); }
	inline String_t* get_LiteralPositiveInfinity_5() const { return ___LiteralPositiveInfinity_5; }
	inline String_t** get_address_of_LiteralPositiveInfinity_5() { return &___LiteralPositiveInfinity_5; }
	inline void set_LiteralPositiveInfinity_5(String_t* value)
	{
		___LiteralPositiveInfinity_5 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralPositiveInfinity_5, value);
	}

	inline static int32_t get_offset_of_LiteralNegativeInfinity_6() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___LiteralNegativeInfinity_6)); }
	inline String_t* get_LiteralNegativeInfinity_6() const { return ___LiteralNegativeInfinity_6; }
	inline String_t** get_address_of_LiteralNegativeInfinity_6() { return &___LiteralNegativeInfinity_6; }
	inline void set_LiteralNegativeInfinity_6(String_t* value)
	{
		___LiteralNegativeInfinity_6 = value;
		Il2CppCodeGenWriteBarrier(&___LiteralNegativeInfinity_6, value);
	}

	inline static int32_t get_offset_of_TypeGenericIDictionary_7() { return static_cast<int32_t>(offsetof(JsonReader_t2123346497_StaticFields, ___TypeGenericIDictionary_7)); }
	inline String_t* get_TypeGenericIDictionary_7() const { return ___TypeGenericIDictionary_7; }
	inline String_t** get_address_of_TypeGenericIDictionary_7() { return &___TypeGenericIDictionary_7; }
	inline void set_TypeGenericIDictionary_7(String_t* value)
	{
		___TypeGenericIDictionary_7 = value;
		Il2CppCodeGenWriteBarrier(&___TypeGenericIDictionary_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
