#include<iostream>
using namespace std;
int main()
{
	int tasty, untasty, poison , rem;
	cout << "enter No of untasty cookies :";
	cin >> untasty;
	cout << "enter No of tasty cookies :";
	cin >> tasty;
	cout << "enter No of cookies containing poison :";
	cin >> poison;

	rem = untasty - poison;
	if (rem > 0)
	{
		cout << "aleena can eat tasty cookies = 0 \n";
	}
	else
	{
		rem = abs(rem);
		cout << "Aleena can eat "<<rem<<" tasty cookies\n";

	}

	return 0;
}