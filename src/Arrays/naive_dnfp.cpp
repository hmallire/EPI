#include "../Headers/arrays.h"
#include "../Headers/utilities.h"

namespace Arrays
{
	void NaiveDNFP(std::vector<Color>& v)
	{

		for(int i = 0; i < v.size(); i++)
			for(int j = i+1; j < v.size(); j++)
			{
				if(v[i] == RED)
					break;
				else
					Utilities::Swap(v[i], v[j]);
			}

		for(int i = 0; i < v.size(); i++)
			for(int j = i+1; j < v.size(); j++)
			{

			}

		int s_i = 0, l_i = v.size() - 1;
		while(s_i < l_i)
		{
			if(v[s_i] == BLUE)
			{
				Utilities::Swap(v[s_i], v[l_i]);
				l_i--;
			}
			else
			{
				s_i++;
			}
		}

	}
} 