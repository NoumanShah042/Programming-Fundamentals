#include <iostream>
using namespace std;

const int rows = 3;
const int col = 3;
int getTotal(int arr[rows][col]);
float getAverage(int arr[rows][col]);
int getRowTotal(int arr[rows][col], int rowNumber);
int getColTotal(int arr[rows][col], int colNumber);
int getHighestRow(int arr[rows][col], int rowNumber);
int getLowestRow(int arr[rows][col], int rowNumber);
void displayArray(int a[rows][col]);

int main()
{
	int arr[rows][col];
	int total = 0;
	float avg = 0.0;
	int rowTotal = 0;
	int colTotal = 0;
	int highest = 0;
	int lowest = 0;
	int rowNumber = 0;
	int colNumber = 0;
	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cin >> arr[r][c];
		}
	}
	cout << endl;
	displayArray(arr);
	cout << endl;
	total = getTotal(arr);
	avg = getAverage(arr);
	cout << "Row Number::" << "\n";
	cin >> rowNumber;
	cout << "Col Number::" << "\n";
	cin >> colNumber;
	//rowTotal = getRowTotal(arr, rowNumber);
	//colTotal = getColTotal(arr, colNumber);
	highest = getHighestRow(arr, rowNumber);
	lowest = getLowestRow(arr, rowNumber);
	cout << "Total::" << total << "\n";
	cout << "Average::" << avg << "\n";
	//cout << "RowTotal::" << rowNumber << ":" << rowTotal << "\n";
	//cout << "ColTotal::" << colNumber << ":" << colTotal << "\n";
	cout << "Highest In row ::" << rowNumber << ":" << highest << "\n";
	cout << "Lowest In Row ::" << rowNumber << ":" << lowest << "\n";
	return 0;
}
int getTotal(int arr[rows][col])
{
	int total = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			total += arr[i][j];
		}
	}
	return total;
}
float getAverage(int arr[rows][col])
{
	int total = 0;
	float avg = 0.0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			total += arr[i][j];
		}
	}
	avg = (((total / rows * col)) / 1.0);
	return avg;
}
int getRowTotal(int arr[rows][col], int rowNumber)
{
	int rowTotal = 0;
	for (int i = 0; i < rows; i++)
	{
		rowTotal += arr[rowNumber - 1][i];
	}
	return rowTotal;
}
int getColTotal(int arr[rows][col], int colNumber)
{
	int colTotal = 0;
	for (int i = 0; i < col; i++)
	{
		colTotal += arr[i][colNumber - 1];
	}
	return colTotal;
}
int getHighestRow(int arr[rows][col], int rowNumber)
{
	int row = rowNumber - 1;
	int highest = arr[row][0];                                                      //  a b c
	for (int i = 0; i < col; i++)                                                   //  d e f
	{                                                                               //  g h i
		if (arr[row][i] > highest)
		{
			highest = arr[row][i];
		}
	}
	return highest;
}
int getLowestRow(int arr[rows][col], int rowNumber)
{
	int row = rowNumber - 1;
	int lowest = arr[row][0];
	for (int i = 0; i < col; i++)
	{
		if (arr[row][i] < lowest)
		{
			lowest = arr[row][i];
		}
	}
	return lowest;
}

void displayArray(int a[rows][col])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
}