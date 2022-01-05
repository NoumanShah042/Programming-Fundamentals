#include<iostream>
using namespace std;

int lastMinimumOccurrence(int a[], int size);
int findMin(int a[], int size);

int main()
{
	int index;
	int a[5] = { 40,69,798,78,1 };
	index=lastMinimumOccurrence(a, 5);
	cout << index;
}




int lastMinimumOccurrence(int a[], int size)
{
	int min;
	min=findMin(a,  size);
	int index=0;

	int i = 0;
	while( i < size)
	{
		
	
		
			
			if (a[size] == min)
			{
				index = size;
				
				
			}
		
		
			
		i = i +1;
	}

	

	return index;


}







int findMin(int a[], int size)
{
	int min;
	int i = 0;
	//int a[5],  min = 0;

	//int ;
	//cin >> a[i];
	min = a[i];
	for (int i = 1; i < size; i = i + 1)
	{
		//cin >> a[i];
		if (a[i] < a[i - 1])
		{
			min = a[i];

		}


	}

	return min;


}






