// Powerpoint 13&24
// Lottery Winners
/* A lottery ticket buyer purchaes ten tickets a week
   Each ticket has 5 numbers on it. 
   There a ten sets of these 5 numbers
   Input1: This weeks lucky five digit number
   Input2: The User's 10 lucky combinations
   Output: Report whether the user is a winner this week*/
   
#include <iostream>
using namespace std;

// Funcion Prototypes
bool LinearSearch(const int[],const int, int);


// Global constants
const int SIZE = 10;
const int LUCKYNUMBERS[SIZE]= {13579,
						   26791,
						   26792,
						   33445,
						   55555,
						   62483,
						   77777,
						   79422,
						   85647,
						   93121};

						   
						   
int main()
{
	// local variables
	int WinningNumber;
	bool Winner = false;
	
	// Prompt
	cout << "Please enter this week's winning five-digit number: ";
	cin  >> WinningNumber;
	
	
	// Input Validation
	while(WinningNumber< 0 || WinningNumber> 99999)
	{
		cout << "Please enter a non-negative five digit number: ";
		cin  >> WinningNumber;
	}
	
	Winner = LinearSearch(LUCKYNUMBERS,SIZE,WinningNumber);
	
	// Did they win or not
	if(Winner)
		cout << "You are a Winner this week!";
	else
	{
		cout << "Sorry, better luck next time!\n";
		cout << "\n" << "\n" << "\n";
		cout << "    wwWWww      wwWWww\n";
		cout << "      (0)         (0)";
		cout << "\n";
		cout << "            wOw          ";
		cout << "\n";
		cout << "\n";
		cout << "           _____          \n";
		cout << "       ___/     \\___        \n";
		cout << "     _/             \\_\n";
		cout << "    /                 \\";
		cout << "\n";
	}
	
	
	return 0;
}




/*********************************************************************
						Linear Search
	Input: An array of numbers(unsorted or sorted)
	Output: True if the searched value is in the array
**********************************************************************/

bool LinearSearch(const int array[], const int size, int searchednumber)
{
	for(int count = 0; count < size; count++)
	{
		if(array[count] == searchednumber)
			return true;
	}
	return false;
	
}

