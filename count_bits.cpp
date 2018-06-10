#include "../Headers/primitive.h"

namespace Primitive {


	// Counts the number of bits set to one in a given integer x
	// O(n) where n is length of binary word x
	void CountBits(EPI::ull x, short* num_bits) {
		*num_bits = 0;
		while (x) {
			*num_bits += x & 1;
			x >>= 1;
		}

	}

	// Counts the number of bits set to one in a given integer x
	// O(k) where k is number of 1's in x
	void CountBits_2(EPI::ull x, short *num_bits) {
		*num_bits = 0;
		while (x) {
			(*num_bits)++;
			x &= (x - 1);
		}
	}
}	//namespace Primitive
