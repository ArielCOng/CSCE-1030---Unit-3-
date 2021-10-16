/* 
 Author: Ariel Ong (arielong@my.unt.edu)
 Date: 11-6-2020
 Instructor: Professor Shrestha
 Description: This program will copy the input file and save it into another file under the name of your choosing. 
*/

//this program reads the enitre contents of an input file and will display it with the same format.

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	char c;
	ifstream in_s; //declaration of the stream of type input
	ofstream out_s;

	char input_file[15];
	char output_file[15]; //output file size

	cout << "Enter the name of the input file: ";
	cin >> input_file;
	
	in_s.open(input_file); //connect to the input file and test


	cout << "Enter the name of the out file: ";
        cin >> output_file; //name of output file

	out_s.open(output_file);

	if(in_s.fail())
	{
		cout << "Unable to open input file " << input_file << endl;
		exit(EXIT_FAILURE); //exit if cannot open file
	}

	while (!in_s.eof()) //loop so that we know when we scanned all of the file
       	{
		while(in_s.get(c))
		{
			out_s << c;  //saving each character into output file
       		} 
	}
	cout << endl << "*** Done writing the contents of the file ***" << endl;
	
	out_s.close(); 
	in_s.close(); // close the file

	return 0;
}
