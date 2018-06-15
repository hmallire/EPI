#include "../Headers/utilities.h"

namespace Utilities
{
	void GetIntArray(std::vector<int>& v)
	{
		
		std::string arr_nums;
		//std::cin.ignore();

		//std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::getline(std::cin, arr_nums);
		
		std::stringstream stream(arr_nums);
	    int n;
		while(stream >> n)
		{
	    	v.push_back(n);
		}
	}
} // namespace Utilities