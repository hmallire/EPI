#ifndef UTILITIES_H_
#define UTILITIES_H_

#include "../EPI.h"
#include "arrays.h"

#include <cmath>
#include <iostream>
#include <random>
#include <limits>

namespace Utilities
{
	template <class T>
	void Swap(T& a, T& b)
	{
		T temp = a;
		a = b;
		b = temp;
	}

	void GetIntArray(std::vector<int>& v);

}

#endif // !UTILITIES_H_
