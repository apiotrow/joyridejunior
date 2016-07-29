#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.SerializeSettings
struct  SerializeSettings_t950356261  : public Il2CppObject
{
public:
	// System.Boolean Pathfinding.Serialization.SerializeSettings::nodes
	bool ___nodes_0;
	// System.Boolean Pathfinding.Serialization.SerializeSettings::prettyPrint
	bool ___prettyPrint_1;
	// System.Boolean Pathfinding.Serialization.SerializeSettings::editorSettings
	bool ___editorSettings_2;

public:
	inline static int32_t get_offset_of_nodes_0() { return static_cast<int32_t>(offsetof(SerializeSettings_t950356261, ___nodes_0)); }
	inline bool get_nodes_0() const { return ___nodes_0; }
	inline bool* get_address_of_nodes_0() { return &___nodes_0; }
	inline void set_nodes_0(bool value)
	{
		___nodes_0 = value;
	}

	inline static int32_t get_offset_of_prettyPrint_1() { return static_cast<int32_t>(offsetof(SerializeSettings_t950356261, ___prettyPrint_1)); }
	inline bool get_prettyPrint_1() const { return ___prettyPrint_1; }
	inline bool* get_address_of_prettyPrint_1() { return &___prettyPrint_1; }
	inline void set_prettyPrint_1(bool value)
	{
		___prettyPrint_1 = value;
	}

	inline static int32_t get_offset_of_editorSettings_2() { return static_cast<int32_t>(offsetof(SerializeSettings_t950356261, ___editorSettings_2)); }
	inline bool get_editorSettings_2() const { return ___editorSettings_2; }
	inline bool* get_address_of_editorSettings_2() { return &___editorSettings_2; }
	inline void set_editorSettings_2(bool value)
	{
		___editorSettings_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
