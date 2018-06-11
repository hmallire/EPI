#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{

	//brute-force algo takes O(2^n)
	//where n is #of bits in integer type(y)
	//O(n) complexity where n is width of y
	void Power(double x, int y, double* ans)
	{
		if (y < 0) 
		{
			y = -y;
			x = 1.0 / x;
		}
		int e = y;
		*ans = 1.0;
		while (e)
		{
			if (e & 1)
			{
				(*ans) *= x;
			}
			x *= x;
			e >>= 1;
		}
		
	}
	
}	//namespace Primitive
