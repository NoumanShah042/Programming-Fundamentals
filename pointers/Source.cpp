#include<iostream>
using namespace std;

void mySwap(int *a, int *b)
{

	int *temp = 0; 
	a = b; 
	b = temp;
	b[1] = 5;

}
int main()
{     
	int a[3] = { 1,2,3 };
	int b[3] = {3,4,5 };

	 int  *s1 =a;
	 int *s2 = b;
	 mySwap(s1, s2);
	 for (int i = 0; i < 2; i++)
	 {
		 cout << a[i] << "  ";
	}




}