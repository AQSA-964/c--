#include <iostream>
using namespace std ;
int main()
{
	float princi_Amnt, int_rate ;
	float no_of_yrs;
	float simple_interest ;
	
	cout << " WELCOME\n" << "TODAY, WE CAN FIND SIMPLE INTEREST IN A LOAN.\n" << "SO WE TAKE INPUT FROM USER AS principal amount ,interest rate ";
	cout << " and number of years.\n";
	cout << " \nplz enter principal amount= ";
	cin >> princi_Amnt;
	cout << " enter interest rate= ";
	cin >> int_rate ;
	cout << " enter no of years=" ;
	cin >> no_of_yrs ;
	
	simple_interest = (princi_Amnt*int_rate*no_of_yrs)/100 ;
	cout << " simple interest= " << simple_interest ;
	
	return 0;
	
	}
