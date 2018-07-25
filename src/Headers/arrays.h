#ifndef ARRAYS_H_
#define ARRAYS_H_

#include "../EPI.h"

#include <cmath>
#include <iostream>
#include <random>
#include <vector>

namespace Arrays
{
	typedef enum { RED, WHITE, BLUE } Color;

	void EvenOdd(std::vector<int>& arr);

	void DNFP(std::vector<int>& arr, const int index);

	void NaiveDNFP(std::vector<Color>& v);

} // namespace Arrays

#endif // !ARRAYS_H_
