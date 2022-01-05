#include<iostream>
using namespace std;
 void math();
 //int X;
 void d()
{
	static int a = 5;
	a = a + 1;
	int b = 10;
	b = b + 1;
	cout << a << ":" << b<<endl;


}
int main()
{
	//cout << a << endl;
	d();
	math();
	//cout << X;
	//cout << a << endl;
	d();
	//cout << a << endl;
	d();
	//cout << a << endl;
	d();
	//cout << a << endl;

	d();
	//cout << a << endl;



}