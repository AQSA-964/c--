#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{
	double mass, weight_on_Earth, weight_on_Moon ;
	char choice ; 
	
	cout <<" WELCOME!\n" <<" HHERE  WE ENTER MASS OF CAR AND THEN FIND IT'S WEIGHT ON EARTH OR MOON.\n" ;
	cout <<"/n ENTER MASS OF A CAAR =" ;
	cin >>mass ;
	
	cout <<"enter either E for mass on earth or M for mass on moon =" ;
	cin >>choice ;
	
	if ( choice == 'E')
	{
		
		weight_on_Earth = mass * (9.81/2) ;
		cout <<" /n WEIGHT OF CAR ON EARTH IS :" << weight_on_Earth ;
		
	}
	
	else
	{
		
		weight_on_Moon = (mass * (0.81/2))/6 ;
		cout <<" /n WEIGHT OF CAR ON MOON IS :" ;
		
	}
	
	return 0 ;
}
