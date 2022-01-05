#include<iostream>
using namespace std;


void task4()
{

	int a = 90;
	int *p = &a;
	cout << *p << endl;
	unsigned long int address = (unsigned long int)&a;
	p = (int*)address;
	cout << *p << endl;
}

void f(int src[],int des[], int size)
{
	for (int i = 0; i < size; i++)
	{
		des[i] = src[i];
	}
}

int main()
{
	int a = 576;
	int *ptr1 = &a;

	
	int d[5] = { 1,2,3,4,5 };
	int c[5] = { 6,3,4,5,2 };
	f(d, c, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << c[i] << "  ";
	}
	cout << endl;
	return 0; 
}



