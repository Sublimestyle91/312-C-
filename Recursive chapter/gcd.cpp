// This program demonstrates a recursive function to 
// calculate the greatest common divisor (gcd) of two
// numbers
#include <iostream>
using namespace std;

// Function prototype
int gcd(int, int);

int main()
{
	// local variables
	int num1,num2;
	
	cout << "enter two integers: ";
	cin  >> num1 >> num2;
	cout << "The greatest common divisor of " << num1;
	cout << " and " << num2 << " is ";
	cout << gcd(num1, num2) << endl;
	
	
	
	// modulo function
	// 13%5 
	// 13/5 ( integer division) = 2
	// 13-2*5 = 3 the modulus
	cout << (10%20);
	return 0;
	
}

/******************************************************
						gcd
*******************************************************/
int gcd(int x, int y)
{
	if(x%y == 0)
		return y;
	else
		return gcd(y, x%y);
}
