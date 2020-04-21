#include <iostream>
#include <conio.h>
#define pie 3.14

using namespace std;

int main()
{
	float weight, radius, y ;
	float volume, Fb ;
	y=62.4;
	
	cout <<" *****ARCHIMEDES' PRINCIPLE*****\n";
	
	cout <<" \nEnter weight of sphere in pounds =" ;
	cin >>weight ;
	
	cout <<" \n Enter radius of sphere in feet =" ;
	cin >>radius ;
	
	volume=(4/3)*pie*radius*radius*radius;
	
	cout <<"\n The volume of sphere=" <<volume;
	
	Fb = volume *y ;
	cout <<" \n \n buoyant force =" << Fb;
	
	if(Fb >=weight)
	
	     cout <<"\n\n THE OBJECT FLOATS" ;
	     
	else//Fb<weight
	
	    cout <<" \n \n THE OBJECT SINKS" ;
	    
	    
	    return 0;
	
}

