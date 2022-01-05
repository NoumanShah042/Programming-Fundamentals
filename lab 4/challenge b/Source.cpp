#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int stHour, stMin, endHour, endMin, totalStMin, totalEndMin, taskTime, a,b ;


	cout.fill('.');
	cout << setw(22) << left << "Enter Starting Hour"<<":";
	cin >> stHour;
	cout << setw(22) << left << "Enter starting Min" << ":";
	cin >> stMin;
	cout << setw(22) << left << "Enter Ending Hour" << ":";
	cin >> endHour;
	cout << setw(22) << left << "Enter Ending Min" << ":";
	cin >> endMin;

	totalStMin = stHour * 60 + stMin;
	totalEndMin = endHour * 60 + endMin;
	taskTime = totalEndMin - totalStMin;

	a = taskTime / 60;
	b = taskTime % 60;
	


	cout << setw(22) << left << "Your task time";
	cout.fill('0');
	cout <<right<< setw(2) << a << ":" << setw(2) << b;

	return 0;









}