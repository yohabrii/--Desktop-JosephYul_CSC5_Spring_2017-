 /*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March  9, 2017; 12:15 p.m.
 Purpose:   Calculates Average Rainfall
*/  

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string month1,          //First month of rainfall
	   month2,          //Second month of rainfall
	   month3;          //Third month of rainfall
	
    int    ranMon1,         //Rain month number 1
	   ranMon2,         //Rain month number 2
	   ranMon3,         //Rain month number 3
	   Avg;             //Average of the three months of rain

	// Data Input
        cout << "Enter the name of the first month: ";
	cin  >> month1;
	cout << "Enter the amount of rainfall\n";
	cout << "measured in inches for the month of " << month1 << ": ";
	cin  >> ranMon1;

	cout << "Enter the name of the second month: ";
	cin  >> month2;
	cout << "Enter the amount of rainfall\n";
	cout << "measured in inches for the month of " << month2 << ": ";
	cin  >> ranMon2;

	cout << "Enter the name of the third month: ";
	cin  >> month3;
	cout << "Enter the amount of rainfall\n";
	cout << "measured in inches for the month of " << month3 << ": ";
	cin  >> ranMon3;

	// Output Data
	Avg = (ranMon1 + ranMon2 + ranMon3) / 3;
	cout << "The average monthly rainfall for ";
	cout << month1 << ", " << month2 << ", and " << month3 << " was ";
	cout << fixed << setprecision(4) << Avg << " inches." << endl;
	return 0; 
        
//Exit stage left!
}
