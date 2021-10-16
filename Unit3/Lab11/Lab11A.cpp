/*Author: Ariel Ong (arielong@my.unt.edu)
 *Date: 11 - 25 - 2020
 *Instructor: Professor Shrestha
 *Description: This program will compute the everage test scored by students for each student. 
 */

#include <iostream>
#include <iomanip>
using namespace std;
/*
	Function: getGrades
 	Parameters: pointer array of integers, number of students as integer, and double 1D array
	Return: void
	Description: Obtains number of tests per student and stores the gray in a array[]. It then calculates teh sum and the average of the array, storying the average of all the grades per student in their respective location in the 1D array.
 */
void getGrades(int** array, const int numStudents, double* avg)
{	
	int number_of_test; 	//declaring integer for number of tests

	for (int k = 0; k < numStudents; k++) 		//for loop for output and for storing grades in @D array
	{	
		float sumGrades = 0;			//initialzie sum of grades to 0

		cout << "How many tests for student # " << k + 1 << "? ";	//prompt for number of tests
		cin >> number_of_test;
		cout << endl;
		
		array[k] = new int[number_of_test];				//setting number of tests as columns

               	for (int j = 0; j < number_of_test; j++)			//loop for storing grades in 2D array
                {
                        cout << "Enter grade: ";				//output for grade
                        cin >> array[k][j];					//storing grade in 2D array
			cout << endl;
				
			sumGrades = sumGrades + array[k][j];			//adding value to sum of grades
		}		
			       		
		avg[k] = (sumGrades/number_of_test);				//calculating average when one row for student is done
	}
}

/*
	Function: dispAverage
	Parameters: 1D array of doubles and the number of students stored as an integer
	Return: void
	Description: This function outputs all the averages for all of the students
 */

void dispAverage (double* avg, const int numStudents )
{
	 for (int i = 0; i < numStudents; i++)
	 {
		cout << "Student #" << i + 1 << "'s average is: " << fixed << setprecision(2) <<  avg[i] << endl;
	 }

}

int main()
{
	int number_of_student;   	//declaring integer variables
	int **grades; 			//declaring multi-level pointer for dynamic 2D array
	double* average;		//declaring pointer for dynamic 1D array to store average of students
	int number_of_test;	

	cout << "How many students? ";				//output
	cin >> number_of_student;
	
	grades = new int*[number_of_student];			//allocating memory
	average = new double;

	average[number_of_student];				//setting size of array for average array

	getGrades(grades, number_of_student, average);		//calling functions
	dispAverage(average, number_of_student);

	 /* for (int p = 0; p < number_of_student; p++)		//Everytime I used this loop, it gave me a core dump error. But the program still ran before coming to the ebd
	 {
		 delete [] grades[p];
	 }
	 */
		delete [] grades;				//deleting arrays
		delete [] average; 				
	
	return 0; 

}
