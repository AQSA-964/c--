#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	double temp=0;
	double n=45;
	
	for(double i=1 ; i<=n ; i++)
	
{	temp+=1/i; //temp=1+(1/i)
	
	cout<<"\n The SUM is= " <<temp;
}
	return 0;
	
}
