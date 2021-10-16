/* 
Author: Ariel Ong (arielong@my.unt.edu)
Date: 11 - 12 - 2020
Instructor: Professor Shrestha
Description: This program will tell you whether you need to fill up your tank during the trip. 
*/

#include<iostream>
using namespace std;

struct Car {
	string model;                           //car Model
        float tank_size;                        //size of gas tank in gallons
        float mpg;                              //miles per gallon of car

};

bool fillUpRequired(struct Car car, int kilometers); 

int main ()
{
	Car myCar; 
	int kilometers;				//total distance of trip in kilometers

	cout << "Enter the car model: ";	//Prompting for model
	cin >> myCar.model; 
	cout << endl;

	cout << "Enter the tank size of the " << myCar.model << " in gallons: "; //prompting for tank size
	cin >> myCar.tank_size;
	cout << endl;

	cout << "Enter the miles per gallon of the " << myCar.model << ": "; 	   //prompting for mpg
        cin >> myCar.mpg;
	cout << endl;

	cout << "Enter the total kilometers of the planned trip: "; 	   //prompting for tank size
        cin >> kilometers;
	cout << endl;

	if (fillUpRequired(myCar, kilometers)) //tripMiles > capacityInMiles
	{
		cout << "You will need to fill up your " << myCar.model;
		cout << " before you reach your destination. " << endl << endl;
	}
	else
	{
		cout << "Your " << myCar.model << " can travel to your "; //tripMiles < capacityInMiles
		cout << "destination on one tank of gas. " << endl << endl;
	}

	return 0; 
}

/* 
Function: fillUpRequired
Parameters: struct Car with a string value representing the model and two float values representing tank size and miles per gallon.
Return: argument based on whether tripMiles > capacityInMiles
Description: This function will calculate the car's caoacity in miles and convert the kilometers inteded to travel to miles in order to compare which one is more.  
*/

bool fillUpRequired(struct Car car, int kilometers)
{
	float capacityInMiles = car.tank_size * car.mpg; //calculating capacity
	float tripMiles = kilometers * 0.621371;  //calculating tripMiles from kilometers

	return (tripMiles > capacityInMiles);
}
