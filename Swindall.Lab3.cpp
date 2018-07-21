// This program will determine the division with the highest amount of sales
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototype
double getSales(string);
void findHighest(double, double, double, double);


int main()
{
	// Make a list for the different division amounts
	double Sales[4]= {};
	
	// Call the get Sales function and get the sales of each division from user
	Sales[0] = getSales("Northeast");
	Sales[1] = getSales("Southeast");
	Sales[2] = getSales("Southwest");
	Sales[3] = getSales("Northwest");
	
	// Now figure out the highest sales
	findHighest(Sales[0],Sales[1],Sales[2],Sales[3]);
	return 0;	
}



/*************************************************************
	This function will be passed the division and then
	the user will input data for the division
**************************************************************/

double getSales(string division)
{
	// local variable for sales
	double userSales;
	

	// Prompt for user to input sales for divions
	cout << "Enter quarterly sales for the "
		 << division  << ": ";
	cin  >> userSales;
	
	// Input validation (Make sure number is not negative)
	while(userSales <0)
	{
		cout << "Sales figures cannot be negative. Please re-enter.\n";
		cout << "Enter quarterly sales for the "
		 << division  << ": ";
		cin  >> userSales;
	}
	return userSales;	
}


/*****************************************************************
	This function will get the highest number. It will select four
	different parameters to see which one is higher
******************************************************************/

void findHighest(double num1, double num2, double num3, double num4)
{
	double SalesList[4] = {num1, num2, num3, num4};
	double Highest=0;
	int whichdivision;
	string divisionname;
	for(int count =0; count<4; count++)
	{
		if(SalesList[count] > Highest)
		{
			Highest = SalesList[count];
			whichdivision = count;
		}
	}
	
	switch(whichdivision)
	{
		case 0: divisionname = "Northeast division";break;
		case 1: divisionname = "Southeast division";break;
		case 2: divisionname = "Southwest division";break;
		case 3: divisionname = "Northwest division";break;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "The " << divisionname << " had the highest sales this quarter.\n";
	cout << "Their sales where $" << Highest;

}




