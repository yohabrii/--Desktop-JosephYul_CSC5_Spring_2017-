/*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:15 p.m.
 Purpose:   Score Average
 */

//System Libraries
        #include <iostream>
        #include <iomanip>
        using namespace std;

//User Libraries

//Global Constants 

//System of conversion units to another
        int main()
        
{
//Declarations
        int score1;        //Test Score 1
        int score2;        //Test Score 2
        int score3;        //Test Score 3
        int score4;        //Test Score 4        
        int score5;        //Test Score 5
        int average;       //Score Average
        
//Initialize here
	cout<< "Enter test scores sequentially to calculate test score average.\n";
	cin>>score1>>score2>>score3>>score4>>score5;

//Calculation 
	average = (score1+score2+score3+score4+score5)/5;
              
//Output
	cout << "Test score average is "
	     <<fixed<<showpoint<<setprecision(1)<<average<<endl;
        return 0;
        
//Exit stage left!        
}
