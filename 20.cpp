#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 int num, bin;
 
 cout <<" Enter the number"<<endl;
 cin >>num;
 
 cout<<" The binary equivalent of\t" <<num <<"\tis\t" ;
 while(num>0)
 
   { 
       bin=num%2;
       cout <<bin;
       num/=2;
   }
   return 0;
}
