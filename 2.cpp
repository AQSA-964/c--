#include <iostream>
using namespace std;
int main()
{
	int hours, minutes,seconds;
	cout << "Please enter seconds :";
	cin >> seconds ;
	
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	
	cout << hours << "hours" << minutes << "minutes" << seconds << "seconds";

    return 0;
}
