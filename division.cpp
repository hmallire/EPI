#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{

	//Use (2^k)*y to do the division and multiplication
	//Each iteration computes a bit of the quotient
	//Inner while loop takes maximum of n iterations
	//O(n^2) where n is width of quotient
	void Division(unsigned x, unsigned y, unsigned* quotient)
	{
		if (y == 0)
			throw std::runtime_error("Denominator cannot be zero!");
		*quotient = 0;
		while (x >= y)
		{
			int k = 0;
			while (x  >= (y << k)) //its a 32 bit processing so x - (y<<k) doesn't work
			{
				k++;
			}
			x -= y << (k - 1);
			*quotient += 1U << (k - 1);
		}
	}

	//Since we are running inner loop only 64 times
	//O(n) where n is width of the quotient
	void Division2(unsigned x, unsigned y, unsigned* quotient)
	{
		if (y == 0)
			throw std::runtime_error("Denominator cannot be zero!");
		*quotient = 0;
		int power = 32;
		EPI::ull y_power = static_cast<EPI::ull>(y) << power;
		while (x >= y)
		{
			while (y_power > x)
			{
				y_power >>= 1;
				--power;
			}
			*quotient += 1U << power;
			x -= y_power;
		}
	}
}	//namespace Primitive