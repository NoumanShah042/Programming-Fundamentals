#include<iostream>
using namespace std;

void findMin(int a[],int size);

int main()
{
	int a[5] = {1,2,3,4,5 };
	findMin(a,5);
	return 0;
}


void findMin(int a[],int size)
{
	int min;
	int i = 0;
	//int a[5],  min = 0;

	//int ;
	//cin >> a[i];
	min = a[i];
	for (  int i=1  ; i <size; i = i + 1)
	{
		//cin >> a[i];
		if(a[i]<a[i-1])
		{
			min = a[i];
			
		}
		
	
	}

	cout <<"min value is:"<< min;
	
	
}



