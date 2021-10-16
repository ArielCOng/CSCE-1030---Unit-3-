/*
 Author: Ariel Ong (arielong@my.unt.edu)
 Date: 11-6-2020
 Instructor: Professor Shrestha
 Description: This program will take the inputed numbers and sort them into an ascending order. 
*/

#include<iostream>
#include<fstream>

using namespace std; 
int main()
{
	ifstream in_s; //declaring input file
	ofstream out_s; //declaring output file

	const int LENGTH = 20; 
	int numList[LENGTH]; //declarign array
	int i = 0; //declaring i

	in_s.open("unsorted.dat");  //opening files
	out_s.open("sorted.dat");

	if (in_s.fail()) //in case file is unable to open
	{
		cout << "Unable to open input file " << endl;
		exit(EXIT_FAILURE);
	}

	int val; //declaring val as integer

	while(in_s >> val) //while loop to copy file into array
	{
		numList[i++] = val; 
		
	}

	int actualLength = i; //actual length of array stored as actualLength
	
	int max = 0;  //maximum value is stored as 0
	int temp; //temp is declared

	for(i = 1; i < actualLength; i++) //loop to go through array
	{
		for(int j = 0; j < (actualLength - 1); j++) //loop to swap 
			{
			if(numList[j] < numList[j+1] )
			{	
				temp = numList[j + 1]; //swapping values accordingly
			        numList[j+1] = numList[j];	
				numList[j] = temp;
			}
			}
	}	


	for(i = 0; i < actualLength; i++) //storing array into out file
        {
		out_s << numList[i] << endl;
        }
	
	in_s.close(); //closing files
        out_s.close();

	return 0;
}



