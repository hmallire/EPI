#ifndef UTILITIES_H_
#define UTILITIES_H_

#include "../EPI.h"

#include <cmath>
#include <iostream>
#include <random>

namespace Utilities
{
	template <class T>
	void Swap(T& a, T& b)
	{
		T temp = a;
		a = b;
		b = temp;
	}
}

#endif // !UTILITIES_H_