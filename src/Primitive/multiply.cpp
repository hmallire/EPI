#include "../Headers/primitive.h"
#include "../EPI.h"

namespace Primitive 
{

	//O(n^2) where n is width of Numbers
	void Multiply(unsigned x, unsigned y, unsigned* ans) 
	{
		*ans = 0;
		while (x) 
		{
			if (x & 1) 
			{
				Add(*ans, y, ans);
			}
			x >>= 1, y <<= 1;
		}
	}

	//O(n) where n is width of Numbers
	void Add(unsigned x, unsigned y, unsigned* sum) 
	{
		unsigned temp_a = x, temp_b = y, carry_in = 0, carry_out, k = 1;
		*sum = 0;
		while (temp_a || temp_b) 
		{
			unsigned ak = x & k;
			unsigned bk = y & k;
			carry_out = ak&bk | ak&carry_in | bk&carry_in;
			*sum |= ak ^ bk ^ carry_in;
			carry_in = carry_out << 1;
			temp_a >>= 1, temp_b >>= 1, k <<= 1;

		}
		*sum |= carry_in;
	}
}	//namespace Primitive