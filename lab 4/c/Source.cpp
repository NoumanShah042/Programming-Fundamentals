#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int netBal, payment, d1, d2, avgDailyBal , intRatePerMonth;
	double  intRaPerMth, interest;
	cout.fill('-');
	
	cout << setw(57) << left << "Enter Net balance"<<" : ";
	cin >> netBal;
	cout << setw(57) << left << "Enter payment" << " : ";
	cin >> payment;
	cout << setw(57) << left << "Enter Number of days in the billing cycle" << " : ";
	cin >>d1 ;
	cout << setw(57) << left << "Enter number of days,payment is made before billing cycle" << " : ";
	cin >>d2 ;
	cout << setw(57) << left << "Enter interest rate per month" << " : ";
	cin >> intRaPerMth;

	avgDailyBal = (netBal*d1 - payment * d2) / d1;
	interest = avgDailyBal * intRaPerMth;
	
	cout << setw(57) << left << "Your interest" << " : ";
	cout.fill('*');
	cout << "$" << setw(10) << right << setprecision(2)<<fixed << interest;
	

	return 0;

}