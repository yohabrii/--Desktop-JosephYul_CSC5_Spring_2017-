 /*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:15 p.m.
 Purpose:   Math Tutoring 
*/  

#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
unsigned int  seed = time(0);	    //Random number generator
int  
    num1,                           //1st random number
    num2,                           //2nd random number
    num3,                           //Sum of 1st & 2nd random numbers
    num4;                           //Correct response
        
        //Declaration
     
        //Random number initialization process   
	srand (seed);
        
        //Output data and calculation 
	num1 = (rand () % 999) + 1;
	num2 = (rand () % 999) + 1;
	num3 = num1 + num2;

	// Prompt user to enter the sum of two random numbers with a pause to
        // the correct answer
        
	cout << "Enter the sum of the following\n";
	cout << left;
	cout <<  "  " << num1 << endl;
	cout <<  " +" << num2 << endl;
	cout <<  " ----\n";
	cout << right;
	cin  >> num4;

	//Correct output 
	cout <<"The Answer is " << num3 << endl;
	return 0;
        
//Exit stage left!
}