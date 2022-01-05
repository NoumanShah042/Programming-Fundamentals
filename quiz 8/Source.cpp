#include<iostream>
using namespace std;
void lab(int b[10], int N);


int & fun()
{

	static int x = 10;
	return x;

}

int main()

{

	fun() = 3;
	cout << fun();
	return 0;
	//mySwap(&s1);

}


const int N=6;
int f()
{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	lab(a, N);
	for (int i = 0; i < N; i++)
	{
		cout<<" , "<< a[i] << " , ";
	}

	return 0;
}

void lab(int b[10],int N)
{
	for (int i = 0; i < N; i++)
	{
		if (b[i]== -1)
		{
			b[i] = -1;
		}
		else
		{
			b[i] = i;
		}
	}
}