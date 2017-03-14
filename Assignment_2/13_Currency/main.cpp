 /*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:15 p.m.
 Purpose:   Currency Conversion
*/  

#include <iostream>
using namespace std;

int main()
{
//Global constant	
    double yenPerdol = 98.93,    //Value of a Yen
           eurPerdol = 0.74;     //Value of a Euro  

    double USd, Yen, Euros;

// Input data U.S. 
    cout << "To convert a U.S. Dollar to Japanese Yen\n";
    cout << "and Euros enter an amount in U.S dollar: ";
    cin  >> USd;

//Conversion from U.S. Dollars 
    Yen = USd * yenPerdol;
    Euros = USd * eurPerdol;

//Output
    cout << "$" << USd << " U.S. dollar is equivalent to ";
    cout << "¥" << Yen << " and " <<"€" << Euros << ".\n";
return 0;

//Exit stage left!
}