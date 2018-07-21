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
	bool uppercase =true;
	int count;
	
	
	//prompt
	cout << "Please enter a sentence:\n";
	cin.getline(cstr,100);
	
	
	// store as string object
	string str(cstr);
	
	
	// This double while loop will make all uppercase letters to lower case letters
	while(uppercase)
	{
		// These reset the system to search for another uppercase letter
		uppercase = false;
		count = 0;
		
		// This loop finds one upper is there are any
		// It then changes it to lower case and adds a space in front
		// It sets a flag that it encountered an upper case
		while(count < str.length())
		{
			if(str[count] >=65 && str[count] <=90)
			{
				str[count] +=32;
				str.insert(count," ");
				uppercase = true;
				break;
			}
			count++;
		}
	}
	
	// These last steps get rid of the front space and then make the first word upper case
	str.erase(0,1);
	str[0] -= 32;
	cout << str;
	
	
}




