#include "../Headers/primitive.h"
#include "../EPI.h"

namespace Primitive {

	//Computes closest integer to x with the same weight as x
	//O(1) time complexity
	void ClosestIntSameBitCount(EPI::ull x, EPI::ull* ans) {
		std::cout << "\nThe number should not be all zeros or all ones.\n";
		*ans = 0;
		EPI::ull temp = x;

		
		if (x & 0x1 == 1) {
			temp = ~x;
		}
		EPI::ull y = temp&~(temp - 1);
		y = y ^ (y >> 1);
		*ans = x^y;
	}
}	//namespace Primitive