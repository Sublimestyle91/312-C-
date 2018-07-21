// The star player of a high school basketball team is 74 inches tall
// this program will display the height in feet/inches form
#include <iostream>
using namespace std;

int main()
{
	// variable definition
	int heightinches = 74,
		feet,
		modulus;
		
	// calculations
	feet = heightinches/ 12;
	modulus = heightinches%12;
	
	// output to the console
	cout << "A " << heightinches;
	cout << " inch tall basketball palyer is ";
	cout << feet << " feet " << modulus << " inches tall.";
	
	return 0;
}
