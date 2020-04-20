#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	float ptge, GPA ;
	
	cout << " WELCOME!\n" ;
	cout << " TODAY, WE CAN FIND THE GPA\n" ;
	
	cout << " ENTER PERCANTAGE OF MARKS =" ;
	cin >> ptge ;
	
	GPA =(  ptge/100 )* 4 ;
	
	 cout << " MY GPA =" << GPA ;
	 
	 return 0 ;
	 
	 
}
