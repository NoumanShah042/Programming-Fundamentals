#include<iostream>
using namespace std;

int main()
{


	int a = 10;
	int * p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;

	cout << *p1<<endl;                     
	cout << *p2<<endl;
	cout << *p3 << endl;                                                      //*p3 means p2
	cout << **p3  << endl             << endl << endl;

	cout <<"value of p1  "<< p1 << endl;
	cout << "value of p2  " << p2 << endl;
	cout << "value of p3  " << p3 << endl << endl << endl << endl;

	cout <<""<< &a << endl;
	cout << "address of p1   " << &p1 << endl;
	cout << "address of p2  " << &p2 << endl;
	cout << "address of p3  " << &p3 << endl;


	/*const int b = 100;
	
	 int *p = (int *)&b;
	//*p = 90; cout << *p << ":" << b;

	int a = 10;
	int * ptr1 = &a;
	cout << a << endl;
	*ptr1 = 14;
	cout << a << endl;
	const int * *const ptr2 = &ptr1;
	const int * *const *  ptr4 = &ptr2;


	cout << ptr1 << endl;
	cout << ptr2 << endl;
	return 0;*/


}
	


