// This program will include three functions
// upper - converts all the characters in a string to uppercase
// lower - converts all the characters in a string to lowercase
// flip  - converts uppercase to lowercase and lowercase to uppercase
// The main function will pass a string to all these functions
// displaying it each time it changes.
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


// prototypes
void upper(char*);
void lower(char*);
void  flip(char*);


int main()
{
	// local variables
	int count = 0;
	char cstr[100],
		 copycstr[100];
	char* pcstr;
	string function[]= {"lower",
						"upper",
						"flip"};
	
	
	// Prompt
	cout << "Please enter a string value:\n";
	cin.getline(cstr,100);
	
	// Prompts, functions, and prints
	while(count < 3)
	{
		cout << "\nThis is what the string looks like with the ";
		cout << function[count] << " function:\n";
		strcpy(copycstr, cstr);
		
		// switch statement that goest throught all the functions
		switch(count)
		{
			case 0:lower(copycstr);break;
			case 1:upper(copycstr);break;
			case 2: flip(copycstr);break;
		}
		pcstr = copycstr;
		
		// Prints the results of the function
		while(*pcstr != '\0')
		{
			cout << *pcstr;
			pcstr++;
		}
		count++;
	}
	
	
	return 0;
	
}



/*******************************************************
					Upper
 This funcion will make every uppercase letter to a
 lowercase letter
********************************************************/

void upper(char* cstr)
{
	while(*cstr != '\0')
	{
		if(*cstr >= 97 && *cstr <= 122)
		{
			*cstr -= 32;
		}
		cstr++;
	}
}

/*********************************************************
						flip
 This function will change lowercase to uppercase and 
 it will change uppercase to lowercase
**********************************************************/

void flip(char* cstr)
{
	while(*cstr != '\0')
	{
		if(*cstr >= 97 && *cstr <= 122)
		{
			*cstr -= 32;
		}
		else if(*cstr >=65 &&  *cstr <= 90)  // need the else if so you do not do both
		{
			*cstr += 32;
		}
		cstr++;
	}
}


/**************************************************************
						lower
 This function will make uppercase letter lowercase. 
***************************************************************/
void lower(char* cstr)
{
	while(*cstr != '\0')
	{
		if(*cstr >= 65 && *cstr <= 90)
		{
			*cstr += 32;
		}
		cstr++;
	}
}


