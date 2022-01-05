#include<iostream>
using namespace std;

int GiveLcmOfArray(int a[],int);
int GiveProductOfArray(int a[], int);
int GiveSumOfArray(int a[], int size);

int findLcm(int sum, int product);


int main()
{
	int b[5] = { 2,3,3,3,3 };
	//cout<< GiveLcmOfArray(b, 5);
	cout<< GiveProductOfArray(b, 5);
}
int GiveLcmOfArray(int a[],int size)
{
	
	int sum = GiveSumOfArray(a, size);
	int product= GiveProductOfArray(a, size);

	return 0;

}

int findLcm(int sum, int product)
{
	int rem1, rem2, quot = product,lcm=product;

	for (int i = 2; i <= product; i++)
	{
		rem1 = sum / i;
		rem2 = product / i;
		if (rem1 == rem2)
		{
			lcm = quot;
			return lcm;

		}
	}

	return lcm;
}


int GiveSumOfArray(int a[], int size)
{
	int sum = 0;
	for (int i = 1; i < size; i++)
	{
		sum = a[i] + sum;

	}

	return sum;
}



int GiveProductOfArray(int a[], int size)
{
	int product = 1;

	for (int i = 0; i < size; i++)
	{
		product = a[i] * product;

	}

	return product;
}
