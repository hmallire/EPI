// EPI.cpp : Defines the entry point for the console application.
//

#include "EPI.h"
#include "Headers/primitive.h"



using namespace std;

int main()
{
	EPI::ull x;
	cout << "Enter a number: ";
	cin >> x;
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
	
	int reverseDigit = 0;
	Primitive::ReverseDigits(x, &reverseDigit);
	cout << "reverseDigits of " << x << " is " << reverseDigit << endl;

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
	

	return 0;
}

