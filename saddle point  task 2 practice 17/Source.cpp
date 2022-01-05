#include<iostream>
using namespace std;
void findSaddle(int arr[5][5], int size);
int main()
{
	int arr[5][5], count = 0, size;
	cout << "Size::" << endl;
	cin >> size;
	cout << "enter matrix<<endl";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr[i][j];
		}

	}
	findSaddle(arr, size);
	return 0;
}
void findSaddle(int arr[5][5], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int min = arr[i][0], index = 0;
		for (int j = 1; j < size; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
				index = j;
			}
		}
		for (int k = 0; k < size; k++)
		{
			if (min < arr[k][index])
			{
				break;
			}
			if (k == size - 1)

			{
				cout << min << "is a saddle point." << endl;
				count++;
			}
		}
	}
	if (count == 0)
	{
		cout << "Mtrix does not have saddle point." << endl;
	}
}