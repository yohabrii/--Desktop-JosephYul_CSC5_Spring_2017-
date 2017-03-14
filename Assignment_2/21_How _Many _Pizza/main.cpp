/*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 8, 2017; 7:00 p.m.
 Purpose:   How much pizza is needed? */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
//Global Constant	
    const double π = 3.14,       //PI conversion
                 silcOfp = 14.125;      //Slice of pizza 

//Declarations
    double slicsPerpiz,        //Slices per pizza avaliable
       slicsNed,               //Now many slices of pizza per person
       people,                 //Number of attendees
       numOfpizza,             //Number of pizza need for event
       diaMeter,               //Diameter of circle
       raDius,                 //Radius of circle
       area;                   //Area of circle

//User prompts 
        cout << "Enter the following data to calculate number of pizza.\n";
        cout << "How many people will be attending your party?: ";
	cin  >> people;
	cout << "What is the diameter of the pizza in inches: ";
	cin  >> diaMeter;

	//Data Calculations 
	raDius = diaMeter / 2;
	area = π * pow(raDius, 2);
	slicsPerpiz = area / silcOfp;
	slicsNed = people * 4;
	numOfpizza = slicsNed / slicsPerpiz;

	//Display number of slices the pizza can be divided into.
	cout << fixed << setprecision(0);
	cout << "Number of pizza needed for your party: " << numOfpizza << endl;
	return 0;

//Exit stage left!
}



