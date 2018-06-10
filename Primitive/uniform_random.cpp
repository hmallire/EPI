#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{
	//O(1)
	void ZeroOneRandom(int* res)
	{
		std::random_device rd; //provides a uniform random number from truly stochastic processes 
		*res = (rd() % 2);
	}

	//O(lg(b-a+1))
	void UniformRandom(int lower_bound, int upper_bound, int* num) 
	{
		int diff = upper_bound - lower_bound + 1;
		//short num_bits;
		//CountBits_2(static_cast<EPI::ull>(diff), &num_bits);
		//short tmp = 0;
		int ran_num = 0;
		do
		{
			ran_num = 0;
			for (int i = 0; (1 << i) < diff; ++i)
			{
				int ran_gen_bit;
				ZeroOneRandom(&ran_gen_bit);
				ran_num |= ran_gen_bit << i;
			}
		} while (ran_num >= diff);
		*num = ran_num + lower_bound;
		//while (ran_num > diff)
		//{
			//ran_num = 0;
			//while (tmp<num_bits)
			//{
				//int ran_gen_bit;
				//ZeroOneRandom(&ran_gen_bit);
				//ran_num |= ran_gen_bit << tmp;
				//tmp++;
			//}
		//}
	}
}	//namespace Primitive