#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int  temp = *a;
	*a = *b;
	*b = temp;
}
void swapValues(int  c[] , int d[] ,  int size)
{
	for (int i = 0; i < size; i++)
	{
		swap(&c[i], &d[i]);
		
	}
	
}

void displayArray(int a[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ":";
	}

	cout << endl;

}

int main()
{

	int a[4] = { 2,4,8,4 };
	int b[4] = {1,2,3,4  };
	swapValues( a, b,4);
	displayArray(a, 4);
	displayArray(b, 4);







	return 0;
}