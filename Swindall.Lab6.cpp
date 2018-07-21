// This program will do statistical data on the number of movies 
// college students see in a month
// Inputs: number of movies each student has seen/month
// Procedures: sort scores and calculate average

#include <iostream>
#include <iomanip>
using namespace std;

// struct
struct Movieswatched
{
	int Movieswatched;
	int Student;
};

typedef struct Movieswatched Movies;


// Prototypes 
void Getthedata(Movies*, int);
void SelectionSort(Movies*, int);
void Display(Movies*, int);
double Average(Movies*, int);





// accept the number of students
// dynamically create an array
// input validation: no negative numbers
int main()
{
	// local variables
	int size; 
	double AverageMoviesWatched;
	Movies *movies = nullptr;
	
	// prompt
	cout << "How many students are there: ";
	cin  >> size;
	
	//input validation
	while(size < 0)
	{
		cout << "Please enter a valid input: ";
		cin  >> size;
	}
	
	movies = new Movies[size];   // Allocate memory. Do I need to use dynamic allocation?
	
	// Get the user data for the array
	Getthedata(movies,size);
	
	//Put results in ascending order
	SelectionSort(movies,size);
	
	//Display the results
	Display(movies, size);
	
	//Display the average
	AverageMoviesWatched = Average(movies, size);
	cout << fixed << showpoint << setprecision(2);
	cout << "The average movies watched: " << AverageMoviesWatched << endl;
	
	//Delete allocated memory to prevent memory leakage
	delete [] movies;
	
	return 0;
	
}


/**************************************************************
						Getthedata
 This function gets number of movies watched by college student
 It also checks for input validation
***************************************************************/

void Getthedata(Movies *array, int students)
{
	
	
	for(int count = 0; count < students; count++)
	{
		// Prompt user
		cout << "How many movies has student "<< (count +1) << " watched this month: ";
		cin  >> ((array+count))->Movieswatched;
		(*(array+count)).Student = count+1;
		
		// input validation
		while((*(array+count)).Movieswatched < 0)
		{
			cout << "Sorry, that was not a valid input." << endl;
			cout << "Please enter a valid response." << endl;
			cout << "How many movies has student "<< (count +1) << " watched this month: ";
			cin  >> (*(array+count)).Movieswatched;
		}
	}
	
	
}

/*****************************************************************

						Selection Sort
This function will sort the data in ascending order. It will also
keep track which students goes with each data
Input: pointer to array of students
			
******************************************************************/

void SelectionSort(Movies *arrayofstudents,int size)
{
	// local variables
	int startScan, 
		minIndex, 
		minValue,
		temp;
		
	for(startScan= 0; startScan < (size -1); startScan++)
	{
		minIndex = startScan;
		minValue = (arrayofstudents + startScan)->Movieswatched;
		
		// find the lowest number
		for(int index = startScan+1; index < size; index++)
		{
			if((arrayofstudents+index)->Movieswatched < minValue)
			{
				minValue = (arrayofstudents+index)->Movieswatched;
				minIndex = index;
			}
		}
		
		// Put the lowest number and the student index in the same struct and order
		(arrayofstudents+ minIndex)->Movieswatched  = (arrayofstudents+ startScan)->Movieswatched;
		temp = (arrayofstudents+ minIndex)->Student;
		(arrayofstudents+ minIndex)->Student        = (arrayofstudents+ startScan)->Student;
		(arrayofstudents+ startScan)->Movieswatched = minValue;
		(arrayofstudents+ startScan)->Student       = temp;
		
	}
	// clear the screen
	system("cls");
}

/*********************************************************************
							Display
 This function will display a struct that is given to it.
**********************************************************************/

void Display(Movies *array,int size)
{
	// Create the heading for the table
	cout << "  Student    Movies Watched\n";
	cout << " ---------------------------\n";
	
	// Put the numbers under the heading
	for(int count = 0; count < size; count++)
	{
		cout << setw(5) << array[count].Student;
		cout << "             "<< array[count].Movieswatched << endl;  
	}
	

}


/************************************************************************
							Average
 This function will calculate the averagee number of movies watched by 
 a group of students
*************************************************************************/

double Average(Movies *array, int size)
{
	// local variables
	int total=0;
	
	// Find total
	for(int count = 0; count < size; count++)
	{
		total += (array + count)->Movieswatched;	
	}
	
	// return total
	return static_cast<double>(total)/size;
}
