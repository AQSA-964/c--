#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{  
 int popul, days, F0, F1, result ;
 char again = 'X' ; 
 
 cout <<" ***********THE FIBONACCIO NO.'S OF CRUD******** " <<endl ; 
 
  while ( again == 'X' || again == 'x')
   { 
   
             cout <<"\n ENTER THE POPULATION OF CRUD IN POUNDS = " ;
            cin >> popul ;
   
             cout <<"\n ENTER THE NO.'S OF DAYS = " ;
             cin >> days ;
   
            F0 = 0 ;
            F1 = popul ;
   
   for ( int i=5 ; i<=days ; i=i+5 )
     {  
           result = F0 +F1 ;
           F0 = F1 ;
           F1 = result ;
     
	 }
	 cout <<"\n THE RESULT = " << result ;
	  cout <<"\n if you want to find another [type X] " ;
	 cin >> again ;
}
	 cout <<"\n \n PROGRAM END " ;
	 
	 return 0 ;
	 
   
}
   
