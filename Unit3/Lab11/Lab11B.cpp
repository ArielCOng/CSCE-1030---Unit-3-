/*Author: Ariel Ong (arielong@my.unt.edu)
 *Date: 11 - 25 - 2020
 *Instructor: Professor Shrestha
 *Description: This program calculates the running average of doubles.  
 */

#include <iostream>
#include<stdlib.h>	//libarary in order to print out
using namespace std;

int main()
{
	double *array = (double*)malloc(1* sizeof(double));	//allocating memory for a dynamic array of of 1 double
	char yesNo;	//character user will enter to terminate/continue loop
	double sum = 0; 	//initializing sum to 0
	int k = 1; 	//integer to keep track of array
	double avg; 	//average


	do
	{
		array = (double*)realloc(array,(k)*sizeof(double));     //declaring array of doubles
		
		printf("\nEnter a number:");				//output
		scanf("%lf", &array[k-1]);				//input

		printf("\nList of numbers:\n");				//output

		for(int i = 0; i < k; i++)				//for loop for displaying outputs
		{
			printf("%lf\n" , array[i]);
		}
		
		sum = sum + array[k-1];                 		//updating sum
                avg = sum/(k);          				//updating average
	
		printf("\nUpdated average is: %lf \n", avg);		//output for updated average
		printf("\nMore numbers (Y/N)? ");			//prompting for continuation or not
		scanf(" %c", &yesNo);					//input for character

		k++;							//updating counter

	       	if(yesNo == 'y')					//if 'y' is lowercase
		{
			yesNo = 'Y'; 					//capitalize
		}	
	
	}while(yesNo == 'Y');						//condition to keep going
	
	free(array);							//freeing the array

	return 0;
}
