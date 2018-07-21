// This program accepts as input a sentence with all
// words running together, but the first character of
// each word is an uppercase letter and stores it in the form
// of a string object. It converts the sentence to a string
// in which the words are separated by spaces and only the 
// first word starts with an uppercase letter.


// Preprocessor directives
#include <iostream>
#include <string>     // to use string class
using namespace std;



int main()
{
	
	// local variables
	char cstr[100];
	int count2=0;
	
	
	//prompt
	cout << "Please enter a sentence:\n";
	cin.getline(cstr,100);
	
	
	// store as string object
	string str(cstr);
	
	while(str[count2] != '\0')
	{
		if(str[count2] >=65 && str[count2] <=90)
			{
				str[count2] +=32;
				str.insert(count2," ");
				count2++;
			}
		count2++;
	}
	str.erase(0,1);
	str[0] -= 32;
	cout << str;
	
	
}




