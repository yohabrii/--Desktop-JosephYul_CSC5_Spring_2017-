 /*
 File:      main.cpp
 Author:    Yul Joseph 
 Created:   March 6, 2017; 12:15 p.m.
 Purpose:   Calculates amount of widgets on a pallet
 */
#include <iostream>
using namespace std;

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
        int weiPwget=12.5l;   //Weight of Widget 
	int paltWei;            //Pallet Weight
        int tolWeig;            //Combined weight
	int numOfwget;          //Sum of all Widgets
        
//Initialize here
	cout<<"How much does the pallet weigh by itself? ";
	cin>> paltWei;
	cout<<"How much does the pallet weigh with the widgets? ";
	cin>>tolWeig;

//Calculation 
	numOfwget = (tolWeig - paltWei) / weiPwget;
              
//Output
	cout <<"There are "<<numOfwget<<" widgets stacked on the pallet.\n";
        return 0;
        
//Exit stage left!        

}


