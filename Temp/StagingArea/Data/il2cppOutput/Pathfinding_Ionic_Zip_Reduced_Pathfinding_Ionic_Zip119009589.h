#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t2077278539;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip585481293.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipCipherStream
struct  ZipCipherStream_t119009589  : public Stream_t219029575
{
public:
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCipherStream::_cipher
	ZipCrypto_t2077278539 * ____cipher_1;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipCipherStream::_s
	Stream_t219029575 * ____s_2;
	// Pathfinding.Ionic.Zip.CryptoMode Pathfinding.Ionic.Zip.ZipCipherStream::_mode
	int32_t ____mode_3;

public:
	inline static int32_t get_offset_of__cipher_1() { return static_cast<int32_t>(offsetof(ZipCipherStream_t119009589, ____cipher_1)); }
	inline ZipCrypto_t2077278539 * get__cipher_1() const { return ____cipher_1; }
	inline ZipCrypto_t2077278539 ** get_address_of__cipher_1() { return &____cipher_1; }
	inline void set__cipher_1(ZipCrypto_t2077278539 * value)
	{
		____cipher_1 = value;
		Il2CppCodeGenWriteBarrier(&____cipher_1, value);
	}

	inline static int32_t get_offset_of__s_2() { return static_cast<int32_t>(offsetof(ZipCipherStream_t119009589, ____s_2)); }
	inline Stream_t219029575 * get__s_2() const { return ____s_2; }
	inline Stream_t219029575 ** get_address_of__s_2() { return &____s_2; }
	inline void set__s_2(Stream_t219029575 * value)
	{
		____s_2 = value;
		Il2CppCodeGenWriteBarrier(&____s_2, value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(ZipCipherStream_t119009589, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
