#include "../Headers/primitive.h"

namespace Primitive 
{

	//Swaps the bits present in ith and jth position of 64 bit number
	void SwapBits(EPI::ull x, int i, int j, EPI::ull* result) 
	{
		*result = x;

		//std::cout << ((x >> i) & 1) << "::" << ((x >> j) & 1) << '\n';

		if (((x >> i) & 1) != ((x >> j) & 1)) 
		{
			EPI::ull bit_mask = (1ll << i) | (1ll << j);
			*result = x ^ bit_mask;
		}
	}
}	//namespace Primitive
