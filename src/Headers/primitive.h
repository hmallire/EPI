#ifndef PRIMITIVE_H_
#define PRIMITIVE_H_

#include "../EPI.h"

#include <cmath>
#include <iostream>
#include <random>

namespace Primitive 
{
	
	//Representing a point in 2D space
	struct Point
	{
		int x;
		int y;
	};

	struct Rectangle
	{
		int x, y, l, b;
	};

	//Orientation of given three points
	enum ORIENTATION
	{
		COLLINEAR = 0,
		CLOCKWISE,
		ANTI_CLOCKWISE
	};

	void CountBits(EPI::ull x, short* num_bits);
	void CountBits_2(EPI::ull x, short* num_bits);

	void Parity(EPI::ull x, bool* result);
	void Parity_2(EPI::ull x, bool* result);
	void Parity_3(EPI::ull x, bool* result);
	void Parity_4(EPI::ull x, bool* result);

	void SwapBits(EPI::ull x, int i, int j, EPI::ull* result);

	void ReverseBits(EPI::ull x, EPI::ull* result);

	void ClosestIntSameBitCount(EPI::ull x, EPI::ull* ans);

	void Multiply(unsigned x, unsigned y, unsigned* ans);

	void Add(unsigned x, unsigned y, unsigned* sum);

	void Division(unsigned x, unsigned y, unsigned* quotient);

	void Division2(unsigned x, unsigned y, unsigned* quotient);

	void Power(double x, int y, double* ans);

	void ReverseDigits(int x, int* rd);

	void IsPalindromic(int x, bool* res);

	void UniformRandom(int lower_bound, int upper_bound, int* num);

	void FindOrientation(Point p1, Point p2, Point p3, ORIENTATION* ortn);

	void RectangleIntersection(Point p1, Point p2, Point p3, Point p4, Point* a, Point* b, bool* intersect);

	void isIntersect(Point l1, Point r1, Point l2, Point r2, bool* res);

	void RectangleIntersection2(Rectangle R1, Rectangle R2, Rectangle* R3);

	void isIntersect2(Rectangle R1, Rectangle R2, bool* intersect);

}	//namespace Primitive

#endif // !PRIMITIVE_H_

