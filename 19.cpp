#include <iostream>
using namespace std;
int main ()
{
	int tab, n;
	// Enter the number whose tabl eyou want to print 
	cout <<"Enter a number for Table"<<endl;
	cin >> tab;
	
	for (n=1;n<=10;++n)
	
	{
	      cout <<tab <<"*"<<n<<"="<<tab*n <<endl ;
	
	}
	return 0;
}
