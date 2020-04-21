#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int n, fact;
	
	cout<<" Enter interger value"<<endl;
	cin >>n;
	
	fact=1;
	
	while(n>1)
	
	{
		fact=fact * n;
		
		
		n--;
	}
	cout <<"The factorial is "<< fact;
	
	return 0;
}
