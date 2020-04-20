#include <iostream>
using namespace std;

int main()
{
	double time_in_sec, distance, speed ,mile ;
	int hours , minutes , meter ,hour ; 
	mile = 1609.34 ;
	hour = 3600 ;
	
	cout << "WELCOME " ;
	cout << " \nplz enter distance in meter = " ;
	cin >> distance ;
	
	cout << "\n plz enter speed in meter per second = " ;
	cin >> speed ;
	
	time_in_sec=( distance*mile)/(speed*hour) ;
	
	minutes = time_in_sec/60 ;
	
	hours = minutes /60 ;
	minutes = minutes % 60 ;
	cout <<hours <<"  HOURS \t" << minutes  <<"  MINUTES " ;
	return 0 ;
	
}
