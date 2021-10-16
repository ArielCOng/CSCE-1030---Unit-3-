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
	string gpa_arr;
        string studentID;

        int numStud; //number of Students with GPA less than 3.0
	int firstSpace = 0;
	int column = 0;
	int i = 0;
	int arrayLength = 0;
	char c;
	string line;
	int gpaNum;

        while (!in_s.eof()) //loop so that we know when we scanned all of the file
        {
		getline(in_s, line);
	        for ( int k= 0; k < line.length(); k++) 
		{
		       for (int j = 0; j < line.length();k++)
		       {	       
			  c = line[k];
         			if ( !isblank(c))
        			{
       	         			if (firstSpace == 1)
       		        		{
       			        		column++;
       			        		 firstSpace = 0; 	
      	 				}
       					if (column == 0)
       					{
       						firstname[i++]= c; 
       			
       					}
       					else if (column ==1)
       					{
       						secondname[i++] = c;
       					}	
       					else if (column == 2)
       					{
       						gpa_arr[i++] = c;	 
       					}
      	 				else
       					{
						studentID[i++] = c; 
       					}
       				}
       				else
       				{
       					if (firstSpace == 0)
     	  				{	
       						firstSpace = 1; 
       					}	
       				}
		     
			
	cout << firstname;
	//gpaNum = static_cast<int>(gpa_arr);
		if(gpaNum < 3)
		{
			cout << right << setw(10) << firstname;
        	        cout << right << setw(10) << secondname;
                	cout << setw(5) << fixed << setprecision(1) << gpaNum;
                	cout << right << setw(5) << studentID;
		}
        }
	}
	}
	cout << "  uwu";	

	for(int i =0; i < arrayLength; i++)
	{
		cout << firstname[i] << ", " << secondname[i] << ", " << gpa_arr[i] << ", " << studentID[i];  
	}
	in_s.close();
        out_s.close();

}



/*void mycopy(ifstream in_f, outstream out_f); */


