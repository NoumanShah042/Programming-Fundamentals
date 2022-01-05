#include<iostream>
#include<iomanip>
using namespace std;



void printsDiamond(int N)
{
	int i=1,count=0;
	int setWid = 1;
	int k = 1;
	while (i <= N)
	{
		
		int j=1;
		while (j <= k)
		{
			cout<< "*";
			j = j + 1;
			
		}
		setWid = 5;
		k = k + 2;
		i = i + 2;
		cout << endl;
		count = count + 1;
	}
	
	int n = 1;
	int o = N-count;
	int m = N - 2;
	while (n<=o)
	{
		
		int l = 1;
		while (l <= m)
		{
			cout << "*";
			l = l + 1;


		}
		m = m-2;
		cout << endl;
		n = n + 1;
	}




}





int main()
{
	int a;
	cout << "Enter Height :";
	cin >> a;
	printsDiamond(a);
	cout << endl;




}












