/*
Author: Ariel Ong (arielong@my.unt.edu)
Date: 11 - 12 - 2020
Instructor: Professor Shrestha
Description: This program will tell you the average of grades for two students. 
*/

#include<iostream>
using namespace std;

int main ()
{
	int i = 0;

	do
	{
		int *grades; 					//declaring grades a pointer
		double sum = 0;
		int numGrades; 					//number of grades

		cout << "Enter the number of grades: "; 	//output
		cin >> numGrades;
		
		grades = new int;                               //using new operator
		grades[numGrades];

		for(int j = 0; j < numGrades; j++) 		//for loop for inputing grades
		{
			cout << "Enter grade #" << (j + 1) << ": ";
			cin >> grades[j];

			sum += grades[j]; 			//figuring out the sum of x grades
		}

		cout << "Student " << (i + 1) << " average: " << sum/numGrades << endl << endl; //printing out average

		i++;
		
		delete[] grades;  				//deleting grades

	}while(i < 2);

       	return 0;
}


