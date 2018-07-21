// Ch.9 part 2 Bubble sort
// create a string array and sort them using a bubble sort

#include <iostream>
#include <string>
using namespace std;

// Prototypes
void BubbleSort(string[], int);

// Global constants
int ITEMS = 9;


int main()
{
	// string array to be sorted
	string grocerylist[]= {"eggplant",
			   "squash",
			   "apples",
			   "hamburger",
			   "pizza",
			   "shampoo",
			   "soap",
			   "laundry detergent",
			   "bacon"};
			   
			   
	// Print Array to screen
	cout << "The current order of the grocery list is as follows:\n\n\n";
	for(int count = 0; count < ITEMS; count++)
		cout << grocerylist[count] << "\n";
	cout << "\n\n";
	// Sorting algorithm
	BubbleSort(grocerylist, ITEMS);
	
	// Print the sorted list to the screen
	cout << "The sorted grocery list is: \n\n\n";
	for(int count = 0; count < ITEMS; count++)
		cout << grocerylist[count] << "\n";
	
	
}

/*********************************************
				BubbleSort
	Inputs: string array and size of array
	Outputs: Array is not in order from least to greatest
**********************************************/

void BubbleSort(string groceryitems[], int size)
{
	// local variables
	bool inorder;
	string temp;
	
	// Bubble sort algorithm
	do
	{ inorder = false;
		for(int count = 0; count <size -1; count++)
			if(groceryitems[count+1] < groceryitems[count] )
			{
				inorder = true;
				temp = groceryitems[count+1];
				groceryitems[count+1]= groceryitems[count];
				groceryitems[count]= temp;
			}
			
	} while(inorder);
}
