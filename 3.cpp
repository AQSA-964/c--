#include <iostream>
using namespace std;

int main()
{
	int feet;
    int inches;
    int ideal;
     
    cout << "Please enter how many feet tall you are: ";
    cin >> feet;
 
    cout << "Please enter the additional inches of your height: ";
    cin >> inches;
    
    ideal = 110 + (inches * 5);
 
    cout << "Your ideal body weight is: " << ideal ;
 
    return 0;
}
