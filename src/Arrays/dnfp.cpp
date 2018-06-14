#include "../Headers/arrays.h"
#include "../Headers/utilities.h"

namespace Arrays
{
	void DNFP(std::vector<int>& arr, const int index)
	{
		int pivot = arr[index];
		int strt = 0, end = arr.size() - 1;
		while(strt < end)
		{
			if(arr[strt] <= pivot)
			{
				strt++;
			}
			else
			{
				Utilities::Swap(arr[strt], arr[end--]);
			}
		}
		if(arr[end] > pivot)
		{
			end--;
		}
		strt = 0;
		while(strt < end)
		{
			if(arr[strt] < pivot)
			{
				strt++;
			}
			else
			{
				Utilities::Swap(arr[strt], arr[end--]);
			}
		}
	}
}