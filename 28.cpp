#include <iostream>
#include <conio.h>

using namespace std ;

int main ()
{  
int no_of_ex, score_re, total_sco ;
float sum_got, sum_total ;
float per ;

cout <<" HOW MANY EXERCISES TO INPUT ? " ;
cin >> no_of_ex ;

for ( int i=1 ; i<=no_of_ex ; i++ )
{  
   
  cout <<" \nSCORE RECEIVED FOR EXERCISE " << i ;
  cout<<":" ;
  cin >> score_re ;
  
  sum_got = sum_got + score_re ;
  
  cout << "\nTOTAL POINTS POSSIBLE FOR EXERCISE " << i ;
  cout<< ":" ;
  cin >> total_sco ;
  
  sum_total = sum_total + total_sco ;
  
}
   per = ( sum_got / sum_total ) * 100 ;
   
   cout << " \nYOUR TOTAL IS " << sum_got << "  OUT OF " <<sum_total ;
   cout<<" OR ," <<per ;
   cout <<"%" ;
   
   return 0;

}
