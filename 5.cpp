#include <iostream>
using namespace std;
int main()
{
	int drinks_of_cola , drinks_of_coffee ;
	int caffeine_in_cola , caffeine_in_coffee ;
	int overdose_of_caffeine_in_mg ;
	
	overdose_of_caffeine_in_mg = 10000 ;
	cout << " WELCOME!\n" ;
	cout << " enter caffeine present in 12-ounce of cola in mg =" ;	
	cin >> caffeine_in_cola ;
	
	drinks_of_cola = overdose_of_caffeine_in_mg /caffeine_in_cola ;
	
	cout << " enter caffeine present in 16-ounce of coffee in mg = " ;
	cin >> caffeine_in_coffee ;
	
	drinks_of_coffee = overdose_of_caffeine_in_mg / caffeine_in_coffee ;
	
	cout << "drinks of cola =" << drinks_of_cola ;
	cout << "\ndrinks of coffee = " << drinks_of_coffee ;
	return 0 ;
}
