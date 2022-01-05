#include <iostream>
using namespace std;
void candyExchange(int * A, int aSize, int * B, int bSize, int * aExchange, int * bExchange);



int main()
{    
	int b[2] = { 1,1 };
	int a[2] = { 2,3 };
		int     aExchange ,bExchange;

		candyExchange( a, 1, b, 2 ,&aExchange, &bExchange);
		cout << aExchange<<'\n';
		cout << bExchange;





}


int  sumArray(int a[], int size)
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];

	}

	return sum;
}


void mySwap(int a[], int b[],int i,int j)
{
	int temp = a[i];
	b[j] = a[i];
	b[j] = temp;

}
void candyExchange(int * A, int aSize, int * B, int bSize, int * aExchange, int * bExchange)
{
	

	int i = 0;
	int j = bSize;

		while((sumArray(A, aSize)) != (sumArray(B, aSize))  &  j>=0)
	{
		mySwap(A, B, i, j);
		j = j -1;
	}

		if ((sumArray(A, aSize)) == (sumArray(B, aSize)))
		{ 
		

			*aExchange = A[i];
			*bExchange = B[j + 1];
		
		
		}
		else
			
		{
			int j = 0;
			int 	k = aSize;
			while ((sumArray(A, aSize)) != (sumArray(B, aSize))  & k>= 0)
			{
				mySwap(A, B, i, k);
				k = k - 1;
			}
			*aExchange = A[j];
			*bExchange = B[k + 1];

		}





}