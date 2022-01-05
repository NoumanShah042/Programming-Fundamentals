#include<iostream>
using namespace std;
const int N = 3;
void displayArray(int a[N][N]);
void receiveArray(int a[N][N]);


int main()
{
	int a[N][N];
	int b[N][N];
	int rowSize;

	receiveArray(a);
	cout << endl;
	displayArray(a);

	cout << endl;



	{
		int l = 2;                                  //first row

		int i = 0;
		for (int j = 0; j < N; j = j + 2)
		{
			b[i][l - 1] = a[i][l];
			l = l - 1;
		}


		//2nd row
		i = 2;
		l = 0;

		for (int j = 0; j < N; j = j + 2)
		{
			b[i][l + 1] = a[i][l];
			l = l + 1;
		}


	}









	{

		int s = 0;

		for (int j = 0; j < N; j = j + 2)              //  ist col
		{
			b[s + 1][0] = a[s][0];

			s = s + 1;
		}


		// 2nd col
		int l = 2;

		for (int j = 0; j < N; j = j + 2)
		{

			b[l - 1][2] = a[l][2];
			l = l - 1;
		}


	}

	b[1][1] = a[1][1];
	displayArray(b);
	return 0;
}



void displayArray(int a[N][N])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			cout << a[i][j] << " ";
		}
		cout << endl;
	}


}



void receiveArray(int a[N][N])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			cin >> a[i][j];
		}
	}


}