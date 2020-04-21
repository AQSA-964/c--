#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num, div ;
	bool is_prime =true;

	cout <<" Enter the number to check for prime or composite number"<<endl;
	cin>>num;
	if(num<1)
	
	 {
	 	 cout <<" Number needs to be greater than 1";
	 }
 else if (num==1)
     {
     	
     	cout <<" 1 is neither prime nor composite ";
     }
else 
     {
    for(div=2 ; div<=(num/2) ;div++ )
         {
         	if((num%div)==0)
         	{
			   is_prime = false;
         	   break;
			}
		 }
	    if(is_prime)
	    
		  cout <<num <<" is a prime no.";
		else
		
		  cout <<num<<"is not a prime no.";
		  
	 }
 
   return 0;
}
