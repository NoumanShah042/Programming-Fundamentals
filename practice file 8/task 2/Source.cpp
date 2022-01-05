#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main()
{
	cout << "*****" << "Kangaroo Math Competition" << "*****" << endl;
	/*cout << setw(30) << "Kangaroo Math Competition";
	cout  <<setw(6) <<" " << endl;*/


	int a, b, c;
	int userAns;


	srand(time(0));
	a = rand() % 99999;
	b = rand() % 99999;

	cout << setw(8) << a << endl;
	cout << "+" << setw(7) << b << endl;
	cout << "--------" << endl;
	cout << "Hey Kido!  Enter your answer:";
	c = a + b;
	cin >> userAns;
	if (userAns == c)
	{
		cout << "Congrats kido! your answer is correct. " << endl;
	}
	else
	{
		cout << "Oops kido! your answer is incorrect. Keep doing the hard work. You will crack it one day."<<endl;
	}


	cout << setw(8) << a << endl;
	cout << "+" << setw(7) << b << endl << "--------" << endl;

	cout << setw(8) << c << endl;

	return 0;
}