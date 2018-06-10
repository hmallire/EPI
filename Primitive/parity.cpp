#include "../Headers/primitive.h"

namespace Primitive
{
	// Computes the parity of 64 bit number
	// O(n) where n is the word size
	void Parity(EPI::ull x, bool* result) {
		*result = 0;
		while (x) {
			*result ^= (x & 1);
			x >>= 1;
		}
	}

	// Computes the parity of 64 bit number
	// O(k) where k is #bits set to 1 in the word
	void Parity_2(EPI::ull x, bool* result) {
		*result = 0;
		while (x) {
			*result ^= 1;
			x &= (x - 1); // drops the lowest set bit of x
		}
	}

	// Computes parity of the word using lookup table
	//O(n/L) where n is word size and L is lookup table word length O(64/16)
	void Parity_3(EPI::ull x, bool* result) {
		*result = false;
		const int kWordSize = 16;
		const int kBitMask = 0xFFFF;
		int size = pow(2, 16) + 1;
		bool *precomputed_parity = new bool[size];
		// do a memset here
		for (int i = 0; i < size; i++) {
			Parity_4(i, precomputed_parity + i);
		}

		*result ^= precomputed_parity[x&kBitMask] ^
			precomputed_parity[(x >> (kWordSize * 2))&kBitMask] ^
			precomputed_parity[(x >> (kWordSize * 3))&kBitMask] ^
			precomputed_parity[(x >> (kWordSize * 4))&kBitMask];

		delete precomputed_parity;
	}

	//Computes parity of the word using lookup table
	//O(log(n)) where n is word size
	void Parity_4(EPI::ull x, bool* result) {
		*result = false;
		x ^= (x >> 32);
		x ^= (x >> 16);
		x ^= (x >> 8);
		x ^= (x >> 4);
		x ^= (x >> 2);
		x ^= (x >> 1);
		*result = (x & 0x1);
	}
}	//namespace Primitive