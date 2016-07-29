#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t1062986702;

#include "mscorlib_System_Array2840145358.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1062986702.h"

#pragma once
// Pathfinding.Serialization.JsonFx.JsonConverter[]
struct JsonConverterU5BU5D_t1492139323  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) JsonConverter_t1062986702 * m_Items[1];

public:
	inline JsonConverter_t1062986702 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JsonConverter_t1062986702 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1062986702 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
