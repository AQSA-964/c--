#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int next, last, s;
	
	next = 0;
	
	last = 1;
	
	while(last<=200)
	
	{
	      cout<<last <<"\t" ;
	
	      s = next + last; 
	      
		  next = last ;
	      
          last =s ;
	}
	
	return 0;
}
