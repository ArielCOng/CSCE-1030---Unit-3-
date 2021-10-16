/*
 Author: Ariel Ong (arielong@my.unt.edu)
 Date: 11-6-2020
 Instructor: Professor Shrestha
 Description: This program will print out the info of students with less than a 3.0 GPA. 
*/


#include<iostream>
#include<fstream>
#include<iomanip> 
using namespace std;
void mycopy(ifstream &in_s, ofstream &out_s);

int main()
{
        ifstream in_s; //declaration of the stream of input
        ofstream out_s;

        mycopy(in_s, out_s);

        return 0;
}

void mycopy(ifstream &in_s, ofstream &out_s)
{
	in_s.open("data.dat");
        out_s.open("selected.dat");

	if(in_s.fail())
        {
                cout << "Unable to open input file " << endl;
                exit(EXIT_FAILURE); //exit if cannot open file
        }
	string firstname;
        string secondname;
	string gpa;
        string studentID;
	string line;

        while ( getline(in_s, line)) //loop so that we know when we scanned all of the file
        {
	stringstream iss(line);
        iss >> firstname;
        iss >> secondname;
        iss >> gpa;
        iss >> studentID;
        	
	float gpaNum = stof(gpa);

	//gpaNum = static_cast<int>(gpa_arr);
		if(gpaNum < 3)
		{
			out_s << right << setw(10) << firstname;
        	        out_s << right << setw(10) << secondname;
                	out_s << setw(5) << fixed << setprecision(1) << gpaNum;
                	out_s << right << setw(5) << studentID;
			out_s << endl;
		}
	}
	in_s.close();
        out_s.close();

}



/*void mycopy(ifstream in_f, outstream out_f); */


