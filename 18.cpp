#include <iostream>

using namespace std;

int main()
{
int marks;

cout << " WELCOME! \n ENTER YOUR MARKS AND SEE YOUR GRADS AND REMARKS\n  " ;
cout<<"TOTAL MARKS IS 500 " ;

cout <<"\n MARKS =";
cin >>marks ;

if(marks>=400)

     cout << " A" <<"\n EXCELLENT "<<endl;
     
else if(marks>=300)

     cout << " B" <<"\n VERY GOOD "<<endl;
     
else if(marks>=250)

     cout << " C" <<"\n PASSING "<<endl;
     
else if(marks>=200)

     cout << " D" <<"\n NOT GOOD "<<endl;
     
else //marks<=50

     cout << " F" <<"\n YOU ARE FAIL  "<<endl;
     
     return 0;
}
