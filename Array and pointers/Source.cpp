#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int *pt;
	int a[5] = { 1,2,3,4,5 };
	ptr = a;
	//cout << a + 1<<endl;

	for (int i = 0; i < 5; i++)
	{
		cout << &a[i] << endl;
	}
	cout << "poinret" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << (ptr + i) << endl;
	}
	cout << endl;
	return 0;
}