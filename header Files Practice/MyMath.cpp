#include<iostream>
using namespace std;

int calculateFactorial(int a)
{
	int fact=1;
	int i = a;
	while (i != 0)
	{
		fact = fact * i;
			i = i - 1;
	}
	return fact;
}

int calculatesum(int a,int b)
{
	int sum = a + b;
	return sum;
}

int calculateSubtraction(int a, int b)
{
	int Subtract = a + b;
	return Subtract;
}
