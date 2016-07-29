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
// Pathfinding.AstarData
struct AstarData_t2489830825;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3244577588;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t2945431428;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t1967254086;
// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// Pathfinding.Serialization.GraphMeta
struct GraphMeta_t2836493941;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t950356261;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t3538363758;
// System.Collections.Generic.Dictionary`2<Pathfinding.NavGraph,System.Int32>
struct Dictionary_2_t771638910;
// System.Text.UTF8Encoding
struct UTF8Encoding_t2933319368;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.AstarSerializer
struct  AstarSerializer_t1570928167  : public Il2CppObject
{
public:
	// Pathfinding.AstarData Pathfinding.Serialization.AstarSerializer::data
	AstarData_t2489830825 * ___data_2;
	// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.AstarSerializer::writerSettings
	JsonWriterSettings_t3244577588 * ___writerSettings_3;
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.AstarSerializer::readerSettings
	JsonReaderSettings_t2945431428 * ___readerSettings_4;
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Serialization.AstarSerializer::zip
	ZipFile_t1967254086 * ___zip_5;
	// System.IO.MemoryStream Pathfinding.Serialization.AstarSerializer::zipStream
	MemoryStream_t2881531048 * ___zipStream_6;
	// Pathfinding.Serialization.GraphMeta Pathfinding.Serialization.AstarSerializer::meta
	GraphMeta_t2836493941 * ___meta_7;
	// Pathfinding.Serialization.SerializeSettings Pathfinding.Serialization.AstarSerializer::settings
	SerializeSettings_t950356261 * ___settings_8;
	// Pathfinding.NavGraph[] Pathfinding.Serialization.AstarSerializer::graphs
	NavGraphU5BU5D_t3538363758* ___graphs_9;
	// System.Collections.Generic.Dictionary`2<Pathfinding.NavGraph,System.Int32> Pathfinding.Serialization.AstarSerializer::graphIndexInZip
	Dictionary_2_t771638910 * ___graphIndexInZip_10;
	// System.Int32 Pathfinding.Serialization.AstarSerializer::graphIndexOffset
	int32_t ___graphIndexOffset_11;
	// System.UInt32 Pathfinding.Serialization.AstarSerializer::checksum
	uint32_t ___checksum_12;
	// System.Text.UTF8Encoding Pathfinding.Serialization.AstarSerializer::encoding
	UTF8Encoding_t2933319368 * ___encoding_13;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___data_2)); }
	inline AstarData_t2489830825 * get_data_2() const { return ___data_2; }
	inline AstarData_t2489830825 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(AstarData_t2489830825 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_writerSettings_3() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___writerSettings_3)); }
	inline JsonWriterSettings_t3244577588 * get_writerSettings_3() const { return ___writerSettings_3; }
	inline JsonWriterSettings_t3244577588 ** get_address_of_writerSettings_3() { return &___writerSettings_3; }
	inline void set_writerSettings_3(JsonWriterSettings_t3244577588 * value)
	{
		___writerSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___writerSettings_3, value);
	}

	inline static int32_t get_offset_of_readerSettings_4() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___readerSettings_4)); }
	inline JsonReaderSettings_t2945431428 * get_readerSettings_4() const { return ___readerSettings_4; }
	inline JsonReaderSettings_t2945431428 ** get_address_of_readerSettings_4() { return &___readerSettings_4; }
	inline void set_readerSettings_4(JsonReaderSettings_t2945431428 * value)
	{
		___readerSettings_4 = value;
		Il2CppCodeGenWriteBarrier(&___readerSettings_4, value);
	}

	inline static int32_t get_offset_of_zip_5() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___zip_5)); }
	inline ZipFile_t1967254086 * get_zip_5() const { return ___zip_5; }
	inline ZipFile_t1967254086 ** get_address_of_zip_5() { return &___zip_5; }
	inline void set_zip_5(ZipFile_t1967254086 * value)
	{
		___zip_5 = value;
		Il2CppCodeGenWriteBarrier(&___zip_5, value);
	}

	inline static int32_t get_offset_of_zipStream_6() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___zipStream_6)); }
	inline MemoryStream_t2881531048 * get_zipStream_6() const { return ___zipStream_6; }
	inline MemoryStream_t2881531048 ** get_address_of_zipStream_6() { return &___zipStream_6; }
	inline void set_zipStream_6(MemoryStream_t2881531048 * value)
	{
		___zipStream_6 = value;
		Il2CppCodeGenWriteBarrier(&___zipStream_6, value);
	}

	inline static int32_t get_offset_of_meta_7() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___meta_7)); }
	inline GraphMeta_t2836493941 * get_meta_7() const { return ___meta_7; }
	inline GraphMeta_t2836493941 ** get_address_of_meta_7() { return &___meta_7; }
	inline void set_meta_7(GraphMeta_t2836493941 * value)
	{
		___meta_7 = value;
		Il2CppCodeGenWriteBarrier(&___meta_7, value);
	}

	inline static int32_t get_offset_of_settings_8() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___settings_8)); }
	inline SerializeSettings_t950356261 * get_settings_8() const { return ___settings_8; }
	inline SerializeSettings_t950356261 ** get_address_of_settings_8() { return &___settings_8; }
	inline void set_settings_8(SerializeSettings_t950356261 * value)
	{
		___settings_8 = value;
		Il2CppCodeGenWriteBarrier(&___settings_8, value);
	}

	inline static int32_t get_offset_of_graphs_9() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___graphs_9)); }
	inline NavGraphU5BU5D_t3538363758* get_graphs_9() const { return ___graphs_9; }
	inline NavGraphU5BU5D_t3538363758** get_address_of_graphs_9() { return &___graphs_9; }
	inline void set_graphs_9(NavGraphU5BU5D_t3538363758* value)
	{
		___graphs_9 = value;
		Il2CppCodeGenWriteBarrier(&___graphs_9, value);
	}

	inline static int32_t get_offset_of_graphIndexInZip_10() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___graphIndexInZip_10)); }
	inline Dictionary_2_t771638910 * get_graphIndexInZip_10() const { return ___graphIndexInZip_10; }
	inline Dictionary_2_t771638910 ** get_address_of_graphIndexInZip_10() { return &___graphIndexInZip_10; }
	inline void set_graphIndexInZip_10(Dictionary_2_t771638910 * value)
	{
		___graphIndexInZip_10 = value;
		Il2CppCodeGenWriteBarrier(&___graphIndexInZip_10, value);
	}

	inline static int32_t get_offset_of_graphIndexOffset_11() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___graphIndexOffset_11)); }
	inline int32_t get_graphIndexOffset_11() const { return ___graphIndexOffset_11; }
	inline int32_t* get_address_of_graphIndexOffset_11() { return &___graphIndexOffset_11; }
	inline void set_graphIndexOffset_11(int32_t value)
	{
		___graphIndexOffset_11 = value;
	}

	inline static int32_t get_offset_of_checksum_12() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___checksum_12)); }
	inline uint32_t get_checksum_12() const { return ___checksum_12; }
	inline uint32_t* get_address_of_checksum_12() { return &___checksum_12; }
	inline void set_checksum_12(uint32_t value)
	{
		___checksum_12 = value;
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167, ___encoding_13)); }
	inline UTF8Encoding_t2933319368 * get_encoding_13() const { return ___encoding_13; }
	inline UTF8Encoding_t2933319368 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(UTF8Encoding_t2933319368 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_13, value);
	}
};

struct AstarSerializer_t1570928167_StaticFields
{
public:
	// System.Text.StringBuilder Pathfinding.Serialization.AstarSerializer::_stringBuilder
	StringBuilder_t3822575854 * ____stringBuilder_14;

public:
	inline static int32_t get_offset_of__stringBuilder_14() { return static_cast<int32_t>(offsetof(AstarSerializer_t1570928167_StaticFields, ____stringBuilder_14)); }
	inline StringBuilder_t3822575854 * get__stringBuilder_14() const { return ____stringBuilder_14; }
	inline StringBuilder_t3822575854 ** get_address_of__stringBuilder_14() { return &____stringBuilder_14; }
	inline void set__stringBuilder_14(StringBuilder_t3822575854 * value)
	{
		____stringBuilder_14 = value;
		Il2CppCodeGenWriteBarrier(&____stringBuilder_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
