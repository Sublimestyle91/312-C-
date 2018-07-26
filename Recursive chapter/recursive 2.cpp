// Another recursive example
// This program demonstrate a recursive function for 
// countingg the number of times a character appears
// in a string

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int frequency(char ch, string inputString, int pos);

int main()
{
	string inputString = "abcddddef";
	
	cout << "The letter d appears "
		 << frequency('d', inputString, 0) << "times.\n";
	return 0;
}



/*********************************************************
						Frequency function
**********************************************************/

int frequency(char ch, string inputString, int position)
{
	if(position = inputString.length())
		return 0;
	if(inputString[position]= ch)
		return 1 + frequency(ch, inputString, position+1);
	else
		return frequency(ch, inputString, position+1);
}
