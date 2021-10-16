/*
Author: Ariel Ong (arielong@my.unt.edu)
Date: 11 - 13 - 2020
Instructor: Professor Shrestha
Description: This program will tell you the total price for (x) amount of soup at a certain point of inflation.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	int qty = 2;
	int *qtyPtr = &qty; //declaring a pointer

	cout << "qty = " << qty << "    " << "&qty= " << *qtyPtr << endl << endl;
     	cout << "&qty=" << &qty << "    qtrPtr=" << qtyPtr << endl << endl;
	

        qty = 2 + 3;   //new value for qty
	
	cout << "qty = " << qty << "    " << "&qty= " << *qtyPtr << endl << endl;

	float *pricePtr = new float; //declaration of new variable
	cout << "Price of soup: ";
	cin >> *pricePtr; //asking for input
	cout << endl;

	*pricePtr = *pricePtr * 1.05; //new value for pricePtr

	cout << "Total price for " << *qtyPtr << " cans of soup: " << fixed << setprecision(2) << (*qtyPtr * *pricePtr) << endl;

	delete pricePtr;  //deleting pricePtr

      	return 0;
}


