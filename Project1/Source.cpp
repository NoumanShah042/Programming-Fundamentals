#include <iostream>
using namespace std;
int & fun()
{
	 int x ;
	 cout << &x<<endl;
	return x;



}

int * & a()
{
	int a = 50;
	int * p = &a;
	return p;
}

int main()
{
	int a = 50;
	int * p = &a;
	//int & a = fun();
	//cout<<a;
		fun() = 30;
	cout << fun();


	



	
	//int giveLength(char a[]);

	//char a[] = "nouman";
	////const char * p = "nouman";

	//char * p1 = a;
	//p1[0] = 's';
	//p1[2] = 's';
	//p1[4] = 's';
	//cout << p1[2]<<endl;
	//cout << p1;
	////cout <<(void *) p1;
	//cout << giveLength(a);

	return 0;
}

int giveLength(char a[])
{ 
	int length = 0;
	for (int i = 0; a[i] != 0; i++)
	{
		length += 1;

	}
	return length;
}