// recursive funcion

#include <iostream>
using namespace std;


//Prototypes
void message(int);


int main()
{
	message(10);	
	
}



/*************************************************
					recursive message
*************************************************/

void message(int times)
{
	if(times>0)
	{
		cout << "This message is repeated " << times << " more times.\n"  ;
		message(times -1);
	}
	// Notice on the last loop through that it has buddy 0
	cout << "Hey buddy " << times << ".\n";
}
