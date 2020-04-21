#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

int pop_A, pop_B;
int year = 0; 
double growthrate_A, growthrate_B, newpop_A, newpop_B;


cout << "Enter the population of town A and town B: ";
cin >> pop_A >> pop_B;

cout << "Enter the growth rate town A and town B (growth rate B must be less than growth rate A): ";
cin >> growthrate_A >> growthrate_B;


if (growthrate_A > growthrate_B)
{
newpop_A = ((growthrate_A / 100) * pop_A) + pop_A;
newpop_B = ((growthrate_B / 100) * pop_B) + pop_B;

while (pop_A <= pop_B)
{
year += 1;

pop_A = ((growthrate_A / 100) * pop_A) + pop_A;
pop_B = ((growthrate_B / 100) * pop_B) + pop_B;
}

cout <<"new population of A ="<<newpop_A<<endl;
cout <<"new population of B ="<<newpop_B<<endl;
cout << "The number of years it will take for town A population to be equal or greater than the population of town B is: " << year << endl;
}
else
{ cout<<" invalid value"<<endl;
}

return 0;
}
