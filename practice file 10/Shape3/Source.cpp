#include<iostream>
#include<iomanip>
using namespace std;
int main()
{


	int counter, N, i,a;
	cout << "enter N:";
	cin >> N;
	counter = 1;
	
	
	while (counter <= N)                      //control columns
	{
		
		a = N;
		while (a > counter)              //prints ---
		{
			cout << "-";
			a = a -1;
		}
		
		
		i = 1;
		while (i <= counter)                      //prints *
		{
			
			cout  << "*";
			i = i + 1;
		}
		cout << "\n";

		counter = counter + 1;
	}













}