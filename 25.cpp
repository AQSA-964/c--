#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x=1, sq=1, cube=1;

	cout<< "NUMBER\tSQUARE\tCUBE\n";
	
	while(x<=10)
	{
		
	        if(x%2==0)
	     {
	            	sq = x*x;
		            cube=x*x*x;
		            cout<< x <<"\t"<< sq <<"\t"<<cube <<endl;
		            	
       	}
       	
        	x++;
	}
	
	
	return 0;
}
