#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, Even_sum=0, Odd_sum=0;
	
	x=1;
	
	while(x<=20)
	
	  {
	 
	  if(x%2==0)
	  
        	{  Even_sum=Even_sum + x ;
            	x++;
        	}
	else //(x%2==1)

         	{
	           Odd_sum = Odd_sum + x ;
              	x++;
	       }
	   }
	   cout<<" EVEN NUMBER " <<Even_sum ;
	   cout<<"\n ODD NUMBER " <<Odd_sum;
	   
	   	return 0;
	}
