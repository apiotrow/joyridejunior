#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Pathfinding.GraphNode
struct GraphNode_t3525007772;
// Pathfinding.IPathModifier
struct IPathModifier_t1114092113;
// Pathfinding.NavGraph
struct NavGraph_t535983959;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t4278438658;
// Pathfinding.PathNode[]
struct PathNodeU5BU5D_t306831522;
// Pathfinding.PathNode
struct PathNode_t3993763123;
// Pathfinding.AnimationLink/LinkClip
struct LinkClip_t1258331786;
// Pathfinding.GraphModifier
struct GraphModifier_t2580797297;
// Pathfinding.NodeLink2
struct NodeLink2_t851832770;
// Pathfinding.NodeLink3
struct NodeLink3_t851832771;
// Pathfinding.PointNode
struct PointNode_t1968241886;
// Pathfinding.Path
struct Path_t2697364881;
// Pathfinding.UnityReferenceHelper
struct UnityReferenceHelper_t2569543696;
// Pathfinding.GraphEditorBase
struct GraphEditorBase_t1972000504;
// Pathfinding.GridNode
struct GridNode_t3077417940;
// Pathfinding.GridNodeBase
struct GridNodeBase_t1952096965;
// ProceduralWorld/ProceduralPrefab
struct ProceduralPrefab_t3355666305;
// ProceduralWorld/ProceduralTile
struct ProceduralTile_t3051643883;
// AIPath
struct AIPath_t1930792045;
// AILerp
struct AILerp_t1930676671;
// Pathfinding.TriangleMeshNode
struct TriangleMeshNode_t1473270051;
// Pathfinding.MeshNode
struct MeshNode_t2286717691;
// Pathfinding.GridGraph
struct GridGraph_t1662136020;
// Pathfinding.IUpdatableGraph
struct IUpdatableGraph_t2838879853;
// Pathfinding.INavmeshHolder
struct INavmeshHolder_t1805983455;
// Pathfinding.RelevantGraphSurface
struct RelevantGraphSurface_t3815285800;
// Pathfinding.AstarProfiler/ProfilePoint
struct ProfilePoint_t1374212487;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphNode3525007772.h"
#include "AssemblyU2DCSharp_Pathfinding_NavGraph535983959.h"
#include "AssemblyU2DCSharp_Pathfinding_PathThreadInfo3207094601.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphUpdateObject4278438658.h"
#include "AssemblyU2DCSharp_AstarPath_GUOSingle2204657865.h"
#include "AssemblyU2DCSharp_AstarPath_AstarWorkItem401171703.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_Pathfinding_PathNode3993763123.h"
#include "AssemblyU2DCSharp_Pathfinding_AnimationLink_LinkCl1258331786.h"
#include "AssemblyU2DCSharp_AstarDebugger_GraphPoint4260831490.h"
#include "AssemblyU2DCSharp_AstarDebugger_PathTypeDebug3181138036.h"
#include "AssemblyU2DCSharp_Pathfinding_BinaryHeapM_Tuple81172392.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphModifier2580797297.h"
#include "AssemblyU2DCSharp_Pathfinding_NodeLink2851832770.h"
#include "AssemblyU2DCSharp_Pathfinding_NodeLink3851832771.h"
#include "AssemblyU2DCSharp_Pathfinding_PointNode1968241886.h"
#include "AssemblyU2DCSharp_Pathfinding_Path2697364881.h"
#include "AssemblyU2DCSharp_Pathfinding_UnityReferenceHelper2569543696.h"
#include "AssemblyU2DCSharp_Pathfinding_GraphEditorBase1972000504.h"
#include "AssemblyU2DCSharp_Pathfinding_Int32697168784.h"
#include "AssemblyU2DCSharp_Pathfinding_GridNode3077417940.h"
#include "AssemblyU2DCSharp_Pathfinding_GridNodeBase1952096965.h"
#include "AssemblyU2DCSharp_ProceduralWorld_ProceduralPrefab3355666305.h"
#include "AssemblyU2DCSharp_Pathfinding_Int22697168783.h"
#include "AssemblyU2DCSharp_ProceduralWorld_ProceduralTile3051643883.h"
#include "AssemblyU2DCSharp_AIPath1930792045.h"
#include "AssemblyU2DCSharp_AILerp1930676671.h"
#include "AssemblyU2DCSharp_Pathfinding_TriangleMeshNode1473270051.h"
#include "AssemblyU2DCSharp_Pathfinding_MeshNode2286717691.h"
#include "AssemblyU2DCSharp_Pathfinding_GridGraph1662136020.h"
#include "AssemblyU2DCSharp_Pathfinding_RelevantGraphSurface3815285800.h"
#include "AssemblyU2DCSharp_Pathfinding_AstarProfiler_Profil1374212487.h"

#pragma once
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t2658295925  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GraphNode_t3525007772 * m_Items[1];

public:
	inline GraphNode_t3525007772 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GraphNode_t3525007772 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GraphNode_t3525007772 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.IPathModifier[]
struct IPathModifierU5BU5D_t1822870860  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t3538363758  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) NavGraph_t535983959 * m_Items[1];

public:
	inline NavGraph_t535983959 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NavGraph_t535983959 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NavGraph_t535983959 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.PathThreadInfo[]
struct PathThreadInfoU5BU5D_t308636532  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PathThreadInfo_t3207094601  m_Items[1];

public:
	inline PathThreadInfo_t3207094601  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathThreadInfo_t3207094601 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathThreadInfo_t3207094601  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.GraphUpdateObject[]
struct GraphUpdateObjectU5BU5D_t111799991  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GraphUpdateObject_t4278438658 * m_Items[1];

public:
	inline GraphUpdateObject_t4278438658 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GraphUpdateObject_t4278438658 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GraphUpdateObject_t4278438658 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AstarPath/GUOSingle[]
struct GUOSingleU5BU5D_t3437942260  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUOSingle_t2204657865  m_Items[1];

public:
	inline GUOSingle_t2204657865  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUOSingle_t2204657865 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUOSingle_t2204657865  value)
	{
		m_Items[index] = value;
	}
};
// AstarPath/AstarWorkItem[]
struct AstarWorkItemU5BU5D_t3284381006  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) AstarWorkItem_t401171703  m_Items[1];

public:
	inline AstarWorkItem_t401171703  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AstarWorkItem_t401171703 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AstarWorkItem_t401171703  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.PathNode[][]
struct PathNodeU5BU5DU5BU5D_t2072882839  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PathNodeU5BU5D_t306831522* m_Items[1];

public:
	inline PathNodeU5BU5D_t306831522* GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathNodeU5BU5D_t306831522** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathNodeU5BU5D_t306831522* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.PathNode[]
struct PathNodeU5BU5D_t306831522  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PathNode_t3993763123 * m_Items[1];

public:
	inline PathNode_t3993763123 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathNode_t3993763123 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathNode_t3993763123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.AnimationLink/LinkClip[]
struct LinkClipU5BU5D_t2023683087  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) LinkClip_t1258331786 * m_Items[1];

public:
	inline LinkClip_t1258331786 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LinkClip_t1258331786 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LinkClip_t1258331786 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AstarDebugger/GraphPoint[]
struct GraphPointU5BU5D_t423657655  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GraphPoint_t4260831490  m_Items[1];

public:
	inline GraphPoint_t4260831490  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GraphPoint_t4260831490 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GraphPoint_t4260831490  value)
	{
		m_Items[index] = value;
	}
};
// AstarDebugger/PathTypeDebug[]
struct PathTypeDebugU5BU5D_t1625963325  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PathTypeDebug_t3181138036  m_Items[1];

public:
	inline PathTypeDebug_t3181138036  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PathTypeDebug_t3181138036 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PathTypeDebug_t3181138036  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.BinaryHeapM/Tuple[]
struct TupleU5BU5D_t1771834553  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Tuple_t81172392  m_Items[1];

public:
	inline Tuple_t81172392  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tuple_t81172392 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tuple_t81172392  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.GraphModifier[]
struct GraphModifierU5BU5D_t1726533548  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GraphModifier_t2580797297 * m_Items[1];

public:
	inline GraphModifier_t2580797297 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GraphModifier_t2580797297 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GraphModifier_t2580797297 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.NodeLink2[]
struct NodeLink2U5BU5D_t209772279  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) NodeLink2_t851832770 * m_Items[1];

public:
	inline NodeLink2_t851832770 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NodeLink2_t851832770 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NodeLink2_t851832770 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.NodeLink3[]
struct NodeLink3U5BU5D_t695960018  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) NodeLink3_t851832771 * m_Items[1];

public:
	inline NodeLink3_t851832771 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline NodeLink3_t851832771 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, NodeLink3_t851832771 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.PointNode[]
struct PointNodeU5BU5D_t3575172587  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PointNode_t1968241886 * m_Items[1];

public:
	inline PointNode_t1968241886 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PointNode_t1968241886 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PointNode_t1968241886 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Path[]
struct PathU5BU5D_t1978926348  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Path_t2697364881 * m_Items[1];

public:
	inline Path_t2697364881 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Path_t2697364881 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Path_t2697364881 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.UnityReferenceHelper[]
struct UnityReferenceHelperU5BU5D_t2034077105  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UnityReferenceHelper_t2569543696 * m_Items[1];

public:
	inline UnityReferenceHelper_t2569543696 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UnityReferenceHelper_t2569543696 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UnityReferenceHelper_t2569543696 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.GraphEditorBase[]
struct GraphEditorBaseU5BU5D_t647058985  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GraphEditorBase_t1972000504 * m_Items[1];

public:
	inline GraphEditorBase_t1972000504 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GraphEditorBase_t1972000504 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GraphEditorBase_t1972000504 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Int3[]
struct Int3U5BU5D_t1705908273  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Int3_t2697168784  m_Items[1];

public:
	inline Int3_t2697168784  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Int3_t2697168784 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Int3_t2697168784  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t1318463069  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GridNode_t3077417940 * m_Items[1];

public:
	inline GridNode_t3077417940 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GridNode_t3077417940 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GridNode_t3077417940 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.GridNodeBase[]
struct GridNodeBaseU5BU5D_t1693182088  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GridNodeBase_t1952096965 * m_Items[1];

public:
	inline GridNodeBase_t1952096965 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GridNodeBase_t1952096965 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GridNodeBase_t1952096965 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ProceduralWorld/ProceduralPrefab[]
struct ProceduralPrefabU5BU5D_t1919102300  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ProceduralPrefab_t3355666305 * m_Items[1];

public:
	inline ProceduralPrefab_t3355666305 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ProceduralPrefab_t3355666305 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ProceduralPrefab_t3355666305 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Int2[]
struct Int2U5BU5D_t1219720534  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Int2_t2697168783  m_Items[1];

public:
	inline Int2_t2697168783  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Int2_t2697168783 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Int2_t2697168783  value)
	{
		m_Items[index] = value;
	}
};
// ProceduralWorld/ProceduralTile[]
struct ProceduralTileU5BU5D_t1763323914  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ProceduralTile_t3051643883 * m_Items[1];

public:
	inline ProceduralTile_t3051643883 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ProceduralTile_t3051643883 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ProceduralTile_t3051643883 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AIPath[]
struct AIPathU5BU5D_t616438592  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) AIPath_t1930792045 * m_Items[1];

public:
	inline AIPath_t1930792045 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AIPath_t1930792045 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AIPath_t1930792045 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AILerp[]
struct AILerpU5BU5D_t3760092262  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) AILerp_t1930676671 * m_Items[1];

public:
	inline AILerp_t1930676671 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AILerp_t1930676671 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AILerp_t1930676671 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.TriangleMeshNode[]
struct TriangleMeshNodeU5BU5D_t45846258  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) TriangleMeshNode_t1473270051 * m_Items[1];

public:
	inline TriangleMeshNode_t1473270051 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline TriangleMeshNode_t1473270051 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, TriangleMeshNode_t1473270051 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.MeshNode[]
struct MeshNodeU5BU5D_t915126970  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) MeshNode_t2286717691 * m_Items[1];

public:
	inline MeshNode_t2286717691 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline MeshNode_t2286717691 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, MeshNode_t2286717691 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.GridGraph[]
struct GridGraphU5BU5D_t758658909  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GridGraph_t1662136020 * m_Items[1];

public:
	inline GridGraph_t1662136020 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GridGraph_t1662136020 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GridGraph_t1662136020 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.IUpdatableGraph[]
struct IUpdatableGraphU5BU5D_t4199039296  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.INavmeshHolder[]
struct INavmeshHolderU5BU5D_t496010950  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.RelevantGraphSurface[]
struct RelevantGraphSurfaceU5BU5D_t1903541817  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RelevantGraphSurface_t3815285800 * m_Items[1];

public:
	inline RelevantGraphSurface_t3815285800 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RelevantGraphSurface_t3815285800 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RelevantGraphSurface_t3815285800 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.AstarProfiler/ProfilePoint[]
struct ProfilePointU5BU5D_t3365448830  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ProfilePoint_t1374212487 * m_Items[1];

public:
	inline ProfilePoint_t1374212487 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ProfilePoint_t1374212487 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ProfilePoint_t1374212487 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
