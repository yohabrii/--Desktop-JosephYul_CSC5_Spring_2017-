/*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 7:00 p.m.
 Purpose:  Calculates the Sin, Cos and Tan of an Angle
 */


// Calculates and displays the sine, cosine and tangent of an angle.
// Angle Calculator
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
double Angle, 
       Sin, 
       Cos, 
       Tan;
		   
// Input angle in radians.
       cout << "To calculate the sine, cosine and tangent of\n";
       cout << "an angle enter angle in radian: ";
       cin  >> Angle;

       Sin = sin(Angle),  //Sine
       Cos = cos(Angle),  //Cosine
       Tan = tan(Angle);  //Tangent

// Output data in a fixed set, four place after the decimal
       cout << fixed << showpoint << setprecision(4);
       cout << "Angle  : " << setw(7) << Angle << endl;
       cout << "Sine   : " << setw(7) << Sin << endl;
       cout << "Cosine : " << setw(7) << Cos << endl;
       cout << "Tangent: " << setw(7) << Tan << endl;
       
       return 0;
        
//Exit stage left!
}

