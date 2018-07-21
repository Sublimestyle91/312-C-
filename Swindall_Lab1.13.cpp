// A particular employee earns $ 39,000 annually. 
// This program determines and displays whta the amount of his gross pay will be 
// for each pay period if he is paid twice a month (24 pay checks a year) or bi weekly
// ( 26 checks a year)
#include <iostream>
using namespace std;

int main()
{
	// variable definition
	int biweekly,
		annual_amount = 39000,
		twiceamonth;
	
	// calculating each variable
	
	biweekly = annual_amount/26;
	twiceamonth = annual_amount/24;
	
	
	
	// Printing out to the console
	cout << "Annual gross salary               $ " << annual_amount << endl;
	cout << "Gross pay per bi-monthly paycheck $ " << twiceamonth << endl;
	cout << "Gross pay per bi-weekly  paycheck $ " << biweekly << endl;	
	return 0;
}
