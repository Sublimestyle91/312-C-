//This program will showcase an indirect recursive structure
//Program  A calls program B which calls progam a
//Be careful of the recursive nature. None of the functions finish until the last
//funciton finishes
#include <iostream>
using namespace std;


// Prototypes
void programA(int);
void programB(int);
void showme(int);


int main()
{
	// local variables
	int arg = 10;
	
	// Run program
	programA(10);
	
	//difference between ++arg in function and arg++
	showme(++arg); //++arg updates number first and then sends it to function
	showme(arg++); // arg++ updates after using it in the funcion
	cout << arg << endl;	
	return 0;
}



/*****************************************************
					Program A
******************************************************/
void programA(int times)
{
	cout << "program A is called. Now lets call program b\n";
	if(times>0)
		programB(times-1);
	cout << "We are now leaving program A\n";
}



/*****************************************************
					Program B
******************************************************/
void programB(int times)
{	
	cout << "We are now in program B\n";
	programA(times);
	cout << "We are now leaving program B\n";
	
}

/******************************************************
					showme
*******************************************************/
void showme(int arg)
{
	cout<< arg << endl;
}
