#include<iostream>
using namespace std;
int main()
{
	int counter, N,i,b;
	cout << "enter N :";
	cin >> N;
	counter = 1;  
	b = 2;
	while (counter <= N)
	{
		cout << "*"<<endl;
		
		i = 1;
		
		while (i<=b)
		{
			cout << "*";
			i = i + 1;

		}  

		cout << endl;
		b = b + 1;
		counter = counter + 2;
	}







}