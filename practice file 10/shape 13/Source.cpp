#include<iostream>
using namespace std;
int main()
{
	int N, counter,i,a;
	cout << "enter N :";
	cin >> N;
	a = N;
	counter = 1;
	while (counter <= N)                           //works to add N columns
	{
		i = N;
		while (i >= counter)                       //work to display one row
		{

			cout << a;
			i = i - 1;
		}

		a = a - 1;

		cout << endl;


		counter = counter + 1;
	}

}