#include<iostream>
using namespace std;
int main()
{
	int firstNo, secNo, counter, term,N;
	firstNo = 0;  
	secNo = 1;
	counter = 1;
	cout << "enter term";
	cin >> N;
	if (N == 1)
	{
		cout << "fibonacci term = " << firstNo;
	}
	else if(N==2)
	{
		cout << "fibonacci term = " << secNo;
	}
	
	
	
	else
	{

		while (counter < N-1)
		{
			term = firstNo + secNo;
			firstNo = secNo;
			secNo = term;
			counter = counter + 1;

		}
		cout << "fib term = " << secNo;
		return 0;
	}
















}