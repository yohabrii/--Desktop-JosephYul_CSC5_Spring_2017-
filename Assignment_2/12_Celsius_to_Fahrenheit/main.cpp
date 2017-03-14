 /*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:15 p.m.
 Purpose:   Temperature conversion from Celsius to Fahrenheit
*/  
 #include <iostream>
 using namespace std;

int main()
{
//Declaration	
    int C;   //Celsius
    int F;   //Fahrenheit
        
//Initialize here
	cout << "To convert the temperature from Celsius to Fahrenheit\n";
	cout << "Enter the temperature in Celsius: ";
        
//Input
        cin >> C;
        
//Calculation
	F = (9/5 * C) + 32;
        
//Output        
	cout << F << "F°\n"<<endl;
	return 0;
        
        
//Exit Stage Left!
}
