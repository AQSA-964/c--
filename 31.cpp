#include <iostream>
#include <conio.h>

using namespace std ;

int main ()

{ 
int weight, kg, cost, total_cost;
char city;
char ans;
kg = 2;
char again='y';

cout <<" HERE WE CAN FIND THE TOTAL COST OF PARCEL " << endl ;
   while(again=='Y' || again=='y')
   {

    cout <<"\nEnter weight in Kg" <<endl;
    cin >>weight ;
 
    cost = kg * weight ;
    cout <<" IF INSIDE THE CITY THEN TYPE 'Z' ELSE 'N' " <<endl;
    cin >> city;
    if( city == 'z' || city=='Z')
    {
       	
	total_cost = cost + 20 ;
	cout <<" The total cost is " << total_cost << " $" <<endl;
	    
 }
    else {
	total_cost = cost + 40 ;
	cout <<" The total cost is " << total_cost <<" $ " <<endl ;
 }
    cout <<" Would you like to find the cost of another parcel(Type 'Y' or 'y')"<< endl;
	cin >> again;

    }
    

 return 0;
 getch();

}

 

