#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{
	//O(n) where n is #of digits in x
	void ReverseDigits(int x, int* rd)
	{
		*rd = 0;
		while (x)
		{
			int rem = x % 10;
			(*rd) = (*rd) * 10 + rem;
			x /= 10;
		}
	}
}	//namespace Primitive