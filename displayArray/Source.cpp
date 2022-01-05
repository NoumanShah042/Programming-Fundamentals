#include<iostream>
using namespace std;

void displayArray(int a[], int size)
{
	//cout << a[4]<<endl;

	//a[2] = 10;
	///a[5] = 2;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ":";
	}

	cout << endl;

}


int main()
{
	int d[5] = { 1,2,3,4,4 };
	int c[10] = { 1,3,5,7,9,10,11,12,23,34 };
	
	displayArray(c, 5);
	cout << c[2]<<endl; 
	cout << c[5]<<endl;


	//displayArray(c, 10);
	return 0;
}








