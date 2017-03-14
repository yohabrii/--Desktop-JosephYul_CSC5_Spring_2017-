/*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 3:00 p.m.
 Purpose:   Calculates the amount of calories in a cookie
 */

#include <iostream>
using namespace std;

int main()
{
//Declaration	
    const int calPercok = (300 * 10) / 40;   //Fatty goodness computation
        int cookAte;                         //Number of cookies gobbled on
	int calories;                        //All the fatty goodness

//Output & Input data
	cout << "How many cookies have ate in one sitting?\n";
        cin  >> cookAte;
    
	calories = cookAte * calPercok;
	cout << "You have consumed a total of " << calories << " calories.\n";
	return 0;
        
//Exit stage left!
}


