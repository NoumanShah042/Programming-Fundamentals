#include<iostream>
using namespace std;
 
int main()
{

	 long long int num,count,N;
	cout << "enter num :";
	cin >> num;
	count = 0;
	N = num;
	while (N != 0)
	{
		N =N/10;
		count = count + 1;
	}

	cout << "length = " << count;
	return 0;
}



