#include "../Headers/arrays.h"
#include "../Headers/utilities.h"

namespace Arrays
{
	void ReorderEvenOdd(std::vector<int>& arr)
	{
		int nxt_even = 0;
		int nxt_odd = arr.size() - 1;
		while(nxt_even < nxt_odd)
		{
			if(arr[nxt_even] % 2 == 0)
			{
				nxt_even++;
			}
			else
			{
				Utilities::Swap(arr[nxt_even] , arr[nxt_odd--]);
			}
		}
	}

} // namespace Arrays