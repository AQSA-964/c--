#include <iostream>
using namespace std;

int main()
{
double weight,height,BMI;

cout << "Enter weight in kg:";
cin >> weight;

cout << "Enter height in meter:";
cin >> height;

BMI= weight/height*height;
cout << " The BMI is :"<<BMI;

return 0;

}
