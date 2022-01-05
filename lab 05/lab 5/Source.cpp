#include<iostream>
using namespace std;
int main()
{
	int current, changeTo, pressCount;
	cout << "Enter current channel:";
	cin >> current;
	cout << "Enter thee Channel you want to go:";
	cin >> changeTo;
	if(current < changeTo)
	{
		pressCount = changeTo - current;
		cout << "press button " << pressCount << " times";
	}
	else
	{
		pressCount = (100 - current) + changeTo;
		cout << "press button " << pressCount << " times\n";
	}



	return 0;
}
