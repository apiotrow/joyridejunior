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

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t3413079424;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// Pathfinding.Ionic.Zlib.WorkItem
struct WorkItem_t540555615;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zl1823839577.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli211972692.h"
#include "mscorlib_System_Object837106420.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zli540555615.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.CompressionStrategy,System.Boolean)
extern "C"  void ParallelDeflateOutputStream__ctor_m2723275819 (ParallelDeflateOutputStream_t3413079424 * __this, Stream_t219029575 * ___stream0, int32_t ___level1, int32_t ___strategy2, bool ___leaveOpen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.cctor()
extern "C"  void ParallelDeflateOutputStream__cctor_m3197429021 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
extern "C"  int32_t ParallelDeflateOutputStream_get_Strategy_m639249947 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C"  void ParallelDeflateOutputStream_set_Strategy_m619230424 (ParallelDeflateOutputStream_t3413079424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
extern "C"  void ParallelDeflateOutputStream_set_MaxBufferPairs_m1497075511 (ParallelDeflateOutputStream_t3413079424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_BufferSize(System.Int32)
extern "C"  void ParallelDeflateOutputStream_set_BufferSize_m135350819 (ParallelDeflateOutputStream_t3413079424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
extern "C"  void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m2190165793 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ParallelDeflateOutputStream_Write_m3081749884 (ParallelDeflateOutputStream_t3413079424 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
extern "C"  void ParallelDeflateOutputStream__FlushFinish_m2944877676 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
extern "C"  void ParallelDeflateOutputStream__Flush_m1378260016 (ParallelDeflateOutputStream_t3413079424 * __this, bool ___lastInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Flush()
extern "C"  void ParallelDeflateOutputStream_Flush_m2003756978 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Close()
extern "C"  void ParallelDeflateOutputStream_Close_m3630669222 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose()
extern "C"  void ParallelDeflateOutputStream_Dispose_m2294415565 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose(System.Boolean)
extern "C"  void ParallelDeflateOutputStream_Dispose_m73190276 (ParallelDeflateOutputStream_t3413079424 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Reset(System.IO.Stream)
extern "C"  void ParallelDeflateOutputStream_Reset_m2656669652 (ParallelDeflateOutputStream_t3413079424 * __this, Stream_t219029575 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
extern "C"  void ParallelDeflateOutputStream_EmitPendingBuffers_m274638083 (ParallelDeflateOutputStream_t3413079424 * __this, bool ___doAll0, bool ___mustWait1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
extern "C"  void ParallelDeflateOutputStream__DeflateOne_m2996532492 (ParallelDeflateOutputStream_t3413079424 * __this, Il2CppObject * ___wi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Pathfinding.Ionic.Zlib.WorkItem)
extern "C"  bool ParallelDeflateOutputStream_DeflateOneSegment_m327625929 (ParallelDeflateOutputStream_t3413079424 * __this, WorkItem_t540555615 * ___workitem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanSeek()
extern "C"  bool ParallelDeflateOutputStream_get_CanSeek_m4008122879 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanRead()
extern "C"  bool ParallelDeflateOutputStream_get_CanRead_m3979367837 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanWrite()
extern "C"  bool ParallelDeflateOutputStream_get_CanWrite_m3623972186 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Length()
extern "C"  int64_t ParallelDeflateOutputStream_get_Length_m296082732 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Position()
extern "C"  int64_t ParallelDeflateOutputStream_get_Position_m1289165167 (ParallelDeflateOutputStream_t3413079424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Position(System.Int64)
extern "C"  void ParallelDeflateOutputStream_set_Position_m2731807852 (ParallelDeflateOutputStream_t3413079424 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ParallelDeflateOutputStream_Read_m347341271 (ParallelDeflateOutputStream_t3413079424 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ParallelDeflateOutputStream_Seek_m3647771448 (ParallelDeflateOutputStream_t3413079424 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::SetLength(System.Int64)
extern "C"  void ParallelDeflateOutputStream_SetLength_m619628264 (ParallelDeflateOutputStream_t3413079424 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
