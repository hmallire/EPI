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
    
    // 5:47 -- Algo start, 6:12 -- Code start
    // Implement the last variant in EPI as well when time permits (for sure)
    void DNFPSinglePass(std::vector<Color>& A, const int index)
    {
        Arrays::Color pivot = A[index];
        int smaller = 0, larger = A.size(), equal = 0;
        while(equal < larger)
        {
            if(A[equal] < pivot)
            {
                Utilities::Swap(A[smaller++], A[equal++]);
            }
            else if(A[equal] == pivot)
            {
                equal++;
            }
            else
            {
                Utilities::Swap(A[equal], A[--larger]);
            }
        }
    }
    // 9:13 -- Code end
} // namespace Arrays
