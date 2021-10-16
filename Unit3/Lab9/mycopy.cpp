#include "my_header.h"

void mycopy(ifstream &in_s, ofstream &out_s)
{
	in_s.open("data.dat"); //opening files
        out_s.open("selected.dat");

	if(in_s.fail()) //statement if cannot open file
        {
                cout << "Unable to open input file " << endl;
                exit(EXIT_FAILURE); //exit if cannot open file
        }
	string firstname; //declaring variables as strings
        string secondname;
	string gpa;
        string studentID;
	string line;

        while ( getline(in_s, line)) //loop so that we know when we scanned all of the file
        {
	stringstream iss(line); //stringstream parses file  as strings
        iss >> firstname;
        iss >> secondname;
        iss >> gpa;
        iss >> studentID;
        	
	float gpaNum = stof(gpa); //storing as float

		if(gpaNum < 3) //if gpa is less than 3
		{
			out_s << right << setw(10) << firstname; //correct formating
        	        out_s << right << setw(10) << secondname;
                	out_s << setw(5) << fixed << setprecision(1) << gpaNum; //fixed decimal point
                	out_s << right << setw(5) << studentID;
			out_s << endl;
		}
	}
	in_s.close(); //closing file
        out_s.close();

}




