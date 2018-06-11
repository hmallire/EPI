#include "../Headers/primitive.h"

namespace Primitive 
{
	void ReverseBits(EPI::ull x, EPI::ull* result) 
	{
		std::cout << "\nReverses the 64 bit  number.\n";
		*result = 0;
		int size = pow(2, 16);
		EPI::ull *precomputed_reverse = new EPI::ull[size];
		// do a memset here
		for (int i = 0; i < size; i++) 
		{
			precomputed_reverse[i] = i;
			for (int j = 0; j < 8; j++) 
			{
				SwapBits(precomputed_reverse[i], j, 15 - j, precomputed_reverse + i);
			}
		}
		const int kWordSize = 16;
		const int kBitMask = 0xFFFF;
		*result = precomputed_reverse[x&kBitMask] << kWordSize * 3 |
			precomputed_reverse[(x >> kWordSize)&kBitMask] << kWordSize * 2 |
			precomputed_reverse[(x >> (kWordSize * 2))&kBitMask] << kWordSize |
			precomputed_reverse[(x >> (kWordSize * 3))&kBitMask];
	}
}	//namespace Primitive