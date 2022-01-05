#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int main()
{
	cout << "*****" << "Kangaroo Math Competition" << "*****"<<endl;
	/*cout << setw(30) << "Kangaroo Math Competition";
	cout  <<setw(6) <<" " << endl;*/
	

	int a, b;
	int c;
	
	
	srand(time(0));
	a = rand() % 999;
	b = rand() % 999;

	cout << setw(8) << a << endl;
	cout << "+" << setw(7) << b << endl << "--------" << endl;
	cout << "Hey Kido! When you solve it in your mind > Press Enter key to verify your answer:\n";
	cin >> c;
	
	cout << setw(8) << a << endl;
	cout << "+" << setw(7) << b << endl << "--------" << endl;

	cout << setw(8) << a + b<<endl;

	return 0;
}