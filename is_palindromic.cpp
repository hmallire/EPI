#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{
	//O(n) where n is the width of the number
	void IsPalindromic(int x, bool* res)
	{
		if (x < 0)
		{
			*res = false;
			return;
		}
		if (x == 0)
		{
			*res = true;
			return;
		}
		int frst, last;
		int j = static_cast<int>(floor(log10(x)) + 1);
		int msd_mask = static_cast<int>(pow(10, j - 1));
		while (x > 9)
		{
			frst = x % 10;
			last = x / msd_mask;
			if (frst == last)
			{
				x %= msd_mask;
				x /= 10;
				j -= 2;
				msd_mask /= 100;
			}
			else
			{
				*res = false;
				return;
			}
		}
		*res = true;
	}

}	//namespace Primitive
