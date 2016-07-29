#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t495942682;
// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_t2024042338;
// Pathfinding.Ionic.Zlib.WorkItem
struct WorkItem_t540555615;

#include "mscorlib_System_Array2840145358.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip495942682.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl2024042338.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli540555615.h"

#pragma once
// Pathfinding.Ionic.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t531340863  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ZipEntry_t495942682 * m_Items[1];

public:
	inline ZipEntry_t495942682 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ZipEntry_t495942682 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ZipEntry_t495942682 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t3235597527  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Config_t2024042338 * m_Items[1];

public:
	inline Config_t2024042338 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Config_t2024042338 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Config_t2024042338 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Ionic.Zlib.WorkItem[]
struct WorkItemU5BU5D_t2402103878  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WorkItem_t540555615 * m_Items[1];

public:
	inline WorkItem_t540555615 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WorkItem_t540555615 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WorkItem_t540555615 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
