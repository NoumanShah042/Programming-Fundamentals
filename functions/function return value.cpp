#include<iostream>
using namespace std;


int total(int, int, int);
bool bolFun();

int main()
{

	int e, f, g,sum,a;
	cout << "enter Number :";
	cin >> e;
	cout << "enter Number :";
	cin >> f;
	cout << "enter Number :";
	cin >> g;

	sum = total(e, f, g);
	a = bolFun();

	cout << "sum = " << sum<<endl;
	cout << "bool value = "<<a << endl;
	cout << "\nnow i am back in the main function" << endl;

	return 0;
}

bool bolFun()
{

	return 0;
	
}

int total(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;
}

