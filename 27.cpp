#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{ 

double n ;
 double guess ;
 double r ;
 
 cout <<"THE BABYLONION THEOREM TO COMPUTE THE SQUARE ROOT OF NUMBER"<<endl ;

cout <<" ENTER THE POSITIVE NO. = ";
cin >> n ;

guess = n/2.0 ;

for ( int i=0 ; n<=5 ; n++ )
{
	
	r = n / guess ;
	guess = ( guess + r ) / 2 ;
	
} 
   
   cout <<" THE SQUARE ROOT OF A POSITIVE NUMBER IS = " << guess << endl ;
   
          return 0 ;


}
