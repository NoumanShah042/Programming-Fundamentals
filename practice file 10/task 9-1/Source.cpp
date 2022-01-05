#include<iostream>
using namespace std;
int main()
{
	int N, i,a,b;
	cout << "enter N :";
	cin >> N; 
	i = 1;
	
	while (i <= N)
	{  
		a = i;
		while (a<N)
		{
			cout << ".";
			a++;
		}
		cout << i;
		b = 1;
		while (b < i)
		{
			cout<< ".";
			b=b+1;
		}
		cout << "\n";
		i++;
	}




	return 0;
}