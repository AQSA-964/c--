#include <iostream>
using namespace std;

int main()
{  
int divident, divisor ;
 int quot, remain ;
 cout << " ASSALAM O ALAIKUM \n I HOPE YOU  ARE FINE\n " ;
 cout << "*HERE WE WILL FIND THE\n divisor, divident, quotient and remainder\n BY ENTERING TWO INPUT VALUES.\n" ;
cout << " ENTER DIVIDEND =" ;
cin >> divident ;

cout << " ENTER DIVISOR =" ;
cin >> divisor ;

quot = divident / divisor ;
remain = divident % divisor ;

cout << " QUOTIENT =" << quot ;

cout << "\n REMAINDER = " << remain;

return 0;
}
