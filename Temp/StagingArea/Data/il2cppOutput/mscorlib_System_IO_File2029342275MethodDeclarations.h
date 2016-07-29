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

// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t1527309539;
// System.IO.StreamReader
struct StreamReader_t717565226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileMode1356058118.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_IO_FileShare2703391818.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"

// System.Void System.IO.File::Delete(System.String)
extern "C"  void File_Delete_m760984832 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m1326262381 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Move(System.String,System.String)
extern "C"  void File_Move_m1404293974 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName0, String_t* ___destFileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C"  FileStream_t1527309539 * File_Open_m1918038371 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  FileStream_t1527309539 * File_Open_m3723338220 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t1527309539 * File_OpenRead_m3104031109 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t717565226 * File_OpenText_m396847893 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetAttributes(System.String,System.IO.FileAttributes)
extern "C"  void File_SetAttributes_m2359825740 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___fileAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::CheckPathExceptions(System.String)
extern "C"  void File_CheckPathExceptions_m1390322214 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
