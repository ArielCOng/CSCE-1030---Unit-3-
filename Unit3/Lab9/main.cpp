/*
 Author: Ariel Ong (arielong@my.unt.edu)
 Date: 11-6-2020
 Instructor: Professor Shrestha
 Description: This program will print out the info of students with less than a 3.0 GPA. 
*/


using namespace std;

#include<iostream>
#include<fstream>
#include<iomanip> 
#include "my_header.h"

int main()
{
        ifstream in_s; //declaration of the stream of input
        ofstream out_s;

        mycopy(in_s, out_s); //calling function

        return 0;
}


/*void mycopy(ifstream in_f, outstream out_f); */


