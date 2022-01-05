
#include<iostream>
using namespace std;
//
//void snippet4()
//{
//	int a = 854759;
//	//int * q = &a;
//	//cout << q<<endl;
//	//cout << *q << endl << endl;
//
//	short int * p = (short int *)&a;
//	//p = p + 1;
//	//cout << p << endl; 
//	cout << *p << endl;
//
//	//cout << a<<endl;}
//
//
//}
//
//void task3()
//{
//
//	int a = 90;
//	int *p = &a;
//	cout << *p << endl;
//	unsigned long int address = (unsigned long int)&a;
//	p = (int*)address;
//	cout << *p << endl;
//}

//understanding of multilevel pointinfg
/*
//int a = 10;
	//int * p1 = &a;
	//int *const*const p2 = &p1;
	//int const ***p3 = &p2;

	//cout << "address of a:  "<<&a << endl;
	//cout << "address of p1  :" << &p1 << endl;
	//cout << "address of p2  :" << &p2 << endl;
	//cout << "address of p3  :" << &p3 << endl;

	//cout << "values" << endl;
	////cout << a << endl;
	//cout <<"value stored in p1 :"<< p1 << endl;
	//cout << "value stored in p2 :" << p2 << endl;
	//cout << "value stored in p3 :" << p3 << endl;

	//p1 = &a;
	//***p3 = 10;
	//*p2 = 10;*/




//snippet_10
/*

int main()
{
	int a = 576;
	int *pa = &a;
	void **pda = (void**)&pa;
	cout << "&a=   " << &a<<endl;
	cout << "pa=   " << pa << endl;
	cout << "&pa=  " << &pa << endl;
	cout << "pda   " << pda << endl;
	cout << "*pda   " << *pda << endl;

	cout << **(int**)pda;
	return 0;
}
*/