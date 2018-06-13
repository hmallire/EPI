// EPI.cpp : Defines the entry point for the console application.
//

#include "EPI.h"
#include "Headers/primitive.h"
#include "Headers/arrays.h"


using namespace std;

int main()
{
	EPI::ull x;
	cout << "Enter a number: ";
	cin >> x;

	/*int y;
	cout << "Enter another number: ";
	cin >> y;*/

	short ans = 0;
	short ans2 = 0;
	bool Parity = false;
	
	Primitive::CountBits(x, &ans);
	
	Primitive::CountBits_2(x, &ans2);

	Primitive::Parity(x, &Parity);

	bool Parity2 = false;
	Primitive::Parity_2(x, &Parity2);

	bool Parity3 = false;
	Primitive::Parity_3(x, &Parity3);

	bool Parity4 = false;
	Primitive::Parity_4(x, &Parity4);
	
	cout << "x is " << x << " and ans is " << ans << endl;
	cout << "x is " << x << " and ans2 is " << ans2 << endl;
	cout << "x is " << x << " and parity is " << Parity << endl;
	cout << "x is " << x << " and parity2 is " << Parity2 << endl;
	cout << "x is " << x << " and parity3 is " << Parity3 << endl;
	cout << "x is " << x << " and parity4 is " << Parity4 << endl;
	
	
	EPI::ull swapped_ans = 0;
	Primitive::SwapBits(x, 2, 1, &swapped_ans);
	cout << "x is " << x << " and swapped_ans is " << swapped_ans << endl;
	
	
	EPI::ull RB = 0;
	Primitive::ReverseBits(x, &RB);
	cout << "x is " << x << " and revresed number is " << RB << endl;

	EPI::ull SameWeightInt = 0;
	Primitive::ClosestIntSameBitCount(x, &SameWeightInt);
	cout << "x is " << x << " and same weighted nearest number is " << SameWeightInt << endl;
	
	
	unsigned sum = 0;
	Primitive::Multiply(8, 9, &sum);
	cout << "Multiplying 8 and 9......\nAnd the ans is  " << sum << endl;
	
	
	unsigned addSum = 0;
	Primitive::Add(288, 11, &addSum);
	cout << "Adding 288 and 11......\nAnd the ans is " << addSum << endl;
	
	
	unsigned quo = 0;
	Primitive::Division(15, 1, &quo);
	cout << "Dividing 15 and 2......\nAnd the quo is " << quo<< endl;
	Primitive::Division2(15, 15, &quo);
	cout << "Dividing 15 and 2......\nAnd the quo is " << quo << endl;
	
	double power = 0;
	Primitive::Power(2, 3, &power);
	cout << "Power(3,4) is " << power << endl;
	
	int reversedDigit = 0;
	Primitive::ReverseDigits(x, &reversedDigit);
	cout << "reversedDigits of " << x << " is " << reversedDigit << endl;

	bool isPalindrome = false;
	Primitive::IsPalindromic(x, &isPalindrome);
	cout << "Is x a palindrome? " << isPalindrome << endl;

	int urn = 0;
	cout << "Random numbers between 1 and 6 are:" << endl;
	for (int i = 0; i < 12; i++)
	{
		Primitive::UniformRandom(1, 6, &urn);
		cout << urn << " ";
	}
	cout << endl;

	Primitive::Point p1 = { 0, 0 }, p2 = { 1, 2 }, p3 = { 4, 4 };
	Primitive::ORIENTATION ortn;
	Primitive::FindOrientation(p1, p2, p3, &ortn);
	cout << "Orientation of given points is " << ortn << endl;

	Primitive::Point l1 = { 0, 4 }, r1 = { 4, 0 }, l2 = { 6, 6 }, r2 = { 8, 4}, l3 = { 0, 0}, r3 = { 0, 0};
	bool intersection = false;
	RectangleIntersection(l1, r1, l2, r2, &l3, &r3, &intersection);
	if(intersection)
	{
		cout << "Two rectangles intersect.";

		cout << "The rectangle formed by intersection is: " << "{" << l3.x << "," << l3.y << "}" 
		<< ", {" << r3.x << "," << r3.y << "}" << endl;
	}
	else
	{
		cout << "The rectangles don't intersect." << endl;
	}

	Primitive::Rectangle R1 = { 1, 1, 2, 3}, R2 = { 2, 2, 4, 5}, R3 = { 0, 0 ,-1, -1};
	Primitive::RectangleIntersection2(R1, R2, &R3);

	if(R3.l == -1)
	{
		cout << "Rectangles don't intersect" << endl;
	}
	else
	{
		cout << "Rectangle formed by intersection is:  ";
		cout << R3.x << ' ' << R3.y << ' ' << R3.l << ' ' << R3.b << endl;
	}

	//cout << "Size of ull is " << sizeof(EPI::ull) <<endl;

	vector<int> arr(10);
	cout << "Enter 10 numbers: ";

	for( int i = 0;i < 10; i++)
	{
		cin >> arr[i];
	}

	Arrays::ReorderEvenOdd(arr);
	//cout << endl;
	cout << "Ordered 10 numbers are: ";
	for( int i = 0;i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}

