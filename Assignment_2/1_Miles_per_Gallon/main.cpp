/*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:00 p.m.
 Purpose: Calculates Miles per Gallon
 */

//System Libraries
        #include <iostream>
        using namespace std;

//User Libraries

//Global Constants 

//System of conversion units to another
        int main()
        
{
//Declarations
        int Gallons;            //Amount of gas held in tank 
        int Miles;              //Number miles to be driven
        int MilesPerGallon;     //Miles that can be driven per a gallon of gas 
        
//Initialize Here
	cout << "This program calculates how many miles" <<
                " per gallon before refueling\n";     
        cout << "Enter the number of gallons of gas your car can hold: ";
	cin  >> Gallons;
	cout << "Enter the number of miles your car can be"<<
                "driven on a full tank: ";
	cin  >> Miles;

//Calculation 
	MilesPerGallon = Miles/Gallons;
              
//Output
	cout <<"My car can travel " << MilesPerGallon 
             <<" miles per gallon.\n"; 
       return 0;
//Exit stage left!        

}


