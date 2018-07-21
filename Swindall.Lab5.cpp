// This program will first get user data for 
// 12 months on the water consumption in CCF
// centum cubic fee. It will then find the lowest
// consumption, highest consumption, and then 
// the total consumption


// pre processor directives
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Global constants
const string MONTHS[]= {"January",
						"February",
						"March",
						"April",
						"May",
						"June",
						"July",
						"August",
						"September",
						"October",
						"November",
						"December"};
const int HOWMANYMONTHS = 12;

// Prototypes
void Getuserdata(long intarray[], int);
void PrinttheHeader();
void DisplayConsumption(const long[], int);
void GetLowestConsumption(const long[], int);
void GetHighestConsumption(const long[], int);
void GetTotalConsumption(const long[], int);
void GetAverageConsumption(const long[], int);




int main()
{
 long consumption[HOWMANYMONTHS];
 
 // consumption per month
 Getuserdata(consumption,HOWMANYMONTHS);
 
 // Print the header with the current year
 PrinttheHeader();
 
 // Display the consumption for all 12 months
 DisplayConsumption(consumption, HOWMANYMONTHS);
 
 // Get the lowest consumption during the 12 months
 GetLowestConsumption(consumption, HOWMANYMONTHS);
 
 // Get the highest consumption during the 12 months
 GetHighestConsumption(consumption, HOWMANYMONTHS);
 
 // Get the Total consumption during the 12 months
 GetTotalConsumption(consumption, HOWMANYMONTHS);
 
 // Get the Average Consumption during the 12 months
 GetAverageConsumption(consumption, HOWMANYMONTHS);	
}



/*******************************************************
					Getuserdata
 This function will get the water consumption in CCF for
 12 months in a specific year.
 Input: Array for consumption, and array size
 output: Array with new values. No return value
********************************************************/

void Getuserdata(long intarray[], int size)
{
	for(int count=0;count < size ; count++)
	{
		cout << "Enter water consumption in CCF for "
			 << MONTHS[count] << ": ";
		cin  >> intarray[count];
		
		
		
		// This while checks to make sure negative numbers are not entered
		while(intarray[count]< 0)
		{
			cout << "Please enter a non-negative number.\n";
			cout << "Enter water consumption in CCF for "
				 << MONTHS[count] << ": ";
			cin >> intarray[count];
		}		
	}
	system("cls");
}


/**************************************************************
					PrinttheHeader
 This function will print the header of the report. It will ask
 the user what year the report is. 
 Input: values 2005-2020
 output: print to screen the header of report. No return value
***************************************************************/
void PrinttheHeader()
{
	int year;
	cout << "Please enter the year of this report: ";
	cin  >> year;
	
	// Make sure that the year is between 2005 and 2020
	while(year < 2005 || year > 2020)
	{
		cout << "Please enter a year between 2005 and 2020.\n";
		cout << "Please enter the year of this report: ";
		cin  >> year;
	}
	
	
	system("cls");
	cout << "                " << year << " Consumption Report for Paris, Texas\n";
	cout << endl;
}

/*****************************************************************
					 	DisplayConsumption
 This function will display the data that was previously entered by
 the user.
 Input: user array, size of array
 Ouput: Data from the array to console
******************************************************************/

void DisplayConsumption(const long array[], int size)
{
	cout << "Month       Consumption in CCf\n";
	cout << "------------------------------\n";
	for(int count=0; count < size; count++)
	{	
		cout << left  << setw(12) << MONTHS[count]
		     << right << setw(12) << array[count] << endl;
	}
	cout << endl;
	cout << endl;
}



/******************************************************************
							GetlowestConsumption
This function will get the lowest consumption for all the 12 months
Input: user array, array size
Ouput: Prints to console lowest consumption
*******************************************************************/

void GetLowestConsumption(const long array[], int size)
{
	int lowest = array[0];
	int whatmonth = 0;
	// Find the lowest consumption
	for(int count=0; count < size; count ++)
	{
		if(lowest> array[count])
		{
			lowest = array[count];
			whatmonth = count;
		}
	}
	
	// Print the lowest value
	cout << "The lowest consumption was in " << MONTHS[whatmonth]
		 << " with " << array[whatmonth] << " CCF" << endl;
}


/******************************************************************
							GetHighestConsumption
This function will get the Highest consumption for all the 12 months
Input: user array, array size
Ouput: Prints to console highest consumption
*******************************************************************/

void GetHighestConsumption(const long array[], int size)
{
	long Highest = array[0];
	int whatmonth = 0;
	// Find the highest consumption
	for(int count=0; count < size; count ++)
	{
		if(Highest < array[count])
		{
			Highest = array[count];
			whatmonth = count;
		}
	}
	
	// Print the highest value
	cout << "The highest consumption was in " << MONTHS[whatmonth]
		 << " with " << array[whatmonth] << " CCF" << endl;
}


/******************************************************************
							GetTotalConsumption
This function will get the total consumption for all the 12 months
Input: user array, array size
Ouput: Prints to console total consumption
*******************************************************************/

void GetTotalConsumption(const long array[], int size)
{
	long total = 0;
	// Find the total consumption
	for(int count= 0; count < size; count ++)
	{
		total += array[count];
	}
	
	// Print the total consumption value
	cout << "The total consumption for the year: " << total << " CCF" << endl;
}


/******************************************************************
							GetAverageConsumption
This function will get the Average consumption for all the 12 months
Input: user array, array size
Ouput: Prints to console average consumption
*******************************************************************/

void GetAverageConsumption(const long array[], int size)
{
	long average = 0;
	// Find the total consumption
	for(int count= 0; count < size; count ++)
	{
		average += array[count];
	}
	
	// Now find the average consumption
	average /= size;
	
	// Print the average consumption value
	cout << "The average consumption for the year: " << average << " CCF" << endl;
}
