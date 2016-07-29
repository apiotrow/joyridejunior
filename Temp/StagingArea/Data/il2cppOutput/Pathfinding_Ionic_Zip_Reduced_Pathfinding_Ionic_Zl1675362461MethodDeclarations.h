#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t1675362461;
// System.Int16[]
struct Int16U5BU5D_t3675865332;
// System.SByte[]
struct SByteU5BU5D_t1084170289;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1793744486;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl3710307231.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1868319673.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1793744486.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.ctor()
extern "C"  void DeflateManager__ctor_m4127067119 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.cctor()
extern "C"  void DeflateManager__cctor_m2902932894 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
extern "C"  void DeflateManager__InitializeLazyMatch_m1503124727 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
extern "C"  void DeflateManager__InitializeTreeData_m12074308 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
extern "C"  void DeflateManager__InitializeBlocks_m3232439714 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
extern "C"  void DeflateManager_pqdownheap_m985284394 (DeflateManager_t1675362461 * __this, Int16U5BU5D_t3675865332* ___tree0, int32_t ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
extern "C"  bool DeflateManager__IsSmaller_m2978842925 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t3675865332* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t1084170289* ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_scan_tree_m3479009633 (DeflateManager_t1675362461 * __this, Int16U5BU5D_t3675865332* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
extern "C"  int32_t DeflateManager_build_bl_tree_m3111530839 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
extern "C"  void DeflateManager_send_all_trees_m2949788294 (DeflateManager_t1675362461 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
extern "C"  void DeflateManager_send_tree_m3647700908 (DeflateManager_t1675362461 * __this, Int16U5BU5D_t3675865332* ___tree0, int32_t ___max_code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateManager_put_bytes_m101277505 (DeflateManager_t1675362461 * __this, ByteU5BU5D_t58506160* ___p0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
extern "C"  void DeflateManager_send_code_m4210368045 (DeflateManager_t1675362461 * __this, int32_t ___c0, Int16U5BU5D_t3675865332* ___tree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
extern "C"  void DeflateManager_send_bits_m2858727196 (DeflateManager_t1675362461 * __this, int32_t ___value0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
extern "C"  void DeflateManager__tr_align_m1974041040 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
extern "C"  bool DeflateManager__tr_tally_m3218111841 (DeflateManager_t1675362461 * __this, int32_t ___dist0, int32_t ___lc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
extern "C"  void DeflateManager_send_compressed_block_m2498682355 (DeflateManager_t1675362461 * __this, Int16U5BU5D_t3675865332* ___ltree0, Int16U5BU5D_t3675865332* ___dtree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
extern "C"  void DeflateManager_set_data_type_m1877092287 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
extern "C"  void DeflateManager_bi_flush_m398899041 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
extern "C"  void DeflateManager_bi_windup_m462628872 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager_copy_block_m399551087 (DeflateManager_t1675362461 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
extern "C"  void DeflateManager_flush_block_only_m3572923461 (DeflateManager_t1675362461 * __this, bool ___eof0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateNone(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateNone_m1737501409 (DeflateManager_t1675362461 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_stored_block_m3988860671 (DeflateManager_t1675362461 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateManager__tr_flush_block_m2653225524 (DeflateManager_t1675362461 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
extern "C"  void DeflateManager__fillWindow_m1445607583 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateFast(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateFast_m2512194309 (DeflateManager_t1675362461 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateSlow(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_DeflateSlow_m3266474858 (DeflateManager_t1675362461 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
extern "C"  int32_t DeflateManager_longest_match_m3442697430 (DeflateManager_t1675362461 * __this, int32_t ___cur_match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
extern "C"  bool DeflateManager_get_WantRfc1950HeaderBytes_m834671052 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
extern "C"  void DeflateManager_set_WantRfc1950HeaderBytes_m3531704421 (DeflateManager_t1675362461 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m2253877027 (DeflateManager_t1675362461 * __this, ZlibCodec_t1793744486 * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C"  int32_t DeflateManager_Initialize_m4206300986 (DeflateManager_t1675362461 * __this, ZlibCodec_t1793744486 * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
extern "C"  void DeflateManager_Reset_m1773500060 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
extern "C"  void DeflateManager_SetDeflater_m3965807094 (DeflateManager_t1675362461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C"  int32_t DeflateManager_Deflate_m1417406511 (DeflateManager_t1675362461 * __this, int32_t ___flush0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
