#include <iostream>
#include <math.h>

using namespace std ;

int main()

{
	int num1, num2 ;
	float result1 , result2 ;
	int op ;
	
	cout <<"\n\n\n ***************** SCIENTIFIC CALCULATOR ****************** \n\n\n";
	
	cout << "Enter 1st number= ";
	cin >> num1 ;
	
	cout <<" \nEnter 2nd number= ";
	cin >> num2 ;
	
	cout <<"\nEnter 1 (addition), 2(subtration), 3(multiplication), 4(division), 5(remainder),";
	cout<<"6(squareroot), 7(square), 8(cube), 9(log),10(absolute) =";
	
	cin>> op ;
	switch(op) 
	{
	case 1:
		result1=num1 +num2;
		cout << "\nsum =" << result1;
		break ;
		
	case 2:
		result1=num1 -num2;
		cout << "\nsubtraction = "<< result1;
		break ;
		
	case 3:
		result1= num1*num2;
		cout << "\n multiplication = "<< result1;
		break ;
		
	case 4:
		result1= num1/num2 ;
		cout << "\n division = " << result1 ;
		break ;
		
	case 5:
		result1= num1%num2 ;
		cout << "\n remainder = " << result1 ;
		break ;
		
	case 6:
	    result1= sqrt(num1);
	    result2= sqrt(num2);
	    cout << "\n squareroot of 1st number ="<<result1 << " \n squareroot of 2nd number ="<< result2 ;
	    break ;
	    
	case 7:
		result1=num1*num1;
		result2 = num2*num2;
		cout << "\n square of 1st number ="<<result1 << " \n square of 2nd number = "<< result2 ;
	    break ;
	    
	case 8:
		result1=num1*num1*num1;
		result2 = num2*num2*num2;
		cout << "\n cube of 1st number ="<<result1 << " \n cube of 2nd number ="<< result2 ;
	    break ;
	    
	case 9:
	    result1= log(num1);
	    result2= log(num2);
	    cout << "\n log of 1st number ="<<result1 << " \n log of 2nd number = "<< result2 ;
	    break ;
	    
	case 10:
	    result1= abs(num1);
	    result2= abs(num2);
	    cout << "\n absolute of 1st number ="<<result1 << " \n absolute of 2nd number ="<< result2 ;
	    break ;
	    
	default:
		cout<<"invalid operator";
	    
		}
     return 0 ;
}









