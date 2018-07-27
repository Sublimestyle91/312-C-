// This program illustrates the buildingg
// and traversal of a lnked list

#include <iostream>
#include <fstream>
using namespace std;

struct ListNode
{
	double value;
	ListNode *next;
	// Constructor
	ListNode(double value1, ListNode *next1= nullptr)
	{
		value = value1;
		next = next1;
	}
}; // notice that we need this at the end of the strut

int main()
{
	//variables
	double number;
	ListNode *numberList = nullptr;   //list of numbers
	
	//Open the file
	ifstream numberFile("numberFile.dat");
	if(!numberFile)
	{
		cout << "Error in opening the file of numbers";
		exit(1);  // what does this function do
	}
	// Read the file into a linked list
	cout << "The contents fo the file are: " << endl;
	while(numberFile >> number)
	{
	cout << number << " ";
	//Create a node to hold this number
	numberList = new ListNode(number, numberList);
	}
	// Traverse the list while printing
	cout << endl << "The contents of the list are: " << endl;
	ListNode *ptr = numberList;
	
	while( ptr != numberList)
	{
		cout << ptr->value << " "; //process node
		ptr = ptr->next;
	}
	return 0;	
	
}
