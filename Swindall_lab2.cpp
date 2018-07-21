// this program will tell the total amount fo software sales with discounts factored in
// 10-19 units sold    20% 
// 20-49 units sold    30%
// 50-99 units sold    40%
// 100+  units sold    50%
// Each item is sold at an original price of $199

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Defining variables
	int units_purchased;
	double	total_purchase;
	const int ORIGINAL_PRICE = 199;
	
	
	// Give the prompt and set the variable
	cout <<	"How many units are being purchased? ";
	cin  >> units_purchased;
	
	// Determine what discount they should get
	// **Because there is only one statement we don't need curly brackets
	if( units_purchased <= 19 & units_purchased >= 10)
		total_purchase = (ORIGINAL_PRICE*.80)* units_purchased;	  // If qauntity between 10-19
	else if( units_purchased >= 20 & units_purchased <=49)
		total_purchase = (ORIGINAL_PRICE*.70)* units_purchased;   // if qauntity between 20-49
	else if( units_purchased >= 50 & units_purchased <= 99)
		total_purchase = (ORIGINAL_PRICE*.60)* units_purchased;   // if quantity between 50-99
	else if( units_purchased >=100)
		total_purchase = (ORIGINAL_PRICE*.50)* units_purchased;   // if quantity over 100
	else
		total_purchase = (ORIGINAL_PRICE)* units_purchased;       // if quantity below 10
	cout << "The total cost of the purchase is $";
	cout << fixed << setprecision(2) << total_purchase;
	
	return 0;
	
}
