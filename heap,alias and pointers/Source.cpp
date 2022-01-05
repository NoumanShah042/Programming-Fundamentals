#include<iostream>
using namespace std;

int a[5];
int * f()
{
	a[0] = 100;
	a[1] = 101;
	return a;
}
void g(int * * p)
{
	cout << p;
}

void createSet(int **set, const int N)
{
	/*cout<<**set;
	int b = 12;
	*set = &b;
	cout << **set;*/


	*set = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(*set + i);

	}
	cout << "{";
	for (int i = 0; i < N; i++)
	{
		cout <<*(*set + i);
		if(i!=N-1)
		{
			cout << " , ";
		}
	}
	cout << "}";

}
int main()
{
	int a = 10;
	int *  p = &a;
	int **p1 = &p;
	cout << p1<<endl;
	g(p1);


	/*int a = 10;
	int * setA = &a;;
	int  setASize = 10;
	createSet(&setA, setASize);*/

	/*cout << *(f() + 1) << endl;
	cout << (f())[1];*/

	return 0;
}