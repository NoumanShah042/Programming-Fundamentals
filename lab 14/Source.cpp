#include<iostream>
using namespace std;
int ** rotateMatrix(const int * const *const mat, const int rows, const int columns);

int main()
{
	int r = 3, c = 3;
	int **m = new int *[r];
	for (int i = 0; i < r; i++)
	{
		m[i] = new int[c];                        //*(m+1)
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> m[i][j];
		}
	}


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[i][j]<<" ";
		}
		cout << "\n";
	}
	
	int **d = rotateMatrix(m, r, c);;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << d[i][j] << " ";
		}
		cout << "\n";
	}
}



int ** rotateMatrix(const int * const *const mat, const int rows, const int columns)
{

	int r = 3, c = 3;
	int **a = new int *[r];
	for (int i = 0; i < r; i++)
	{
		a[i] = new int[c];                        //*(m+1)
	}


	
/*for (int i = 0; i <= 2; i++)
	{
		for (int j = 2; j >= 0; j = j - 1)
		{
			a[0][i] = mat[j][0];
		}

	}
*/
	
	a[0][0] = mat[2][0];
	a[0][1] = mat[1][0];
	a[0][2] = mat[0][0];

	/*for (int i = 0; i <= 2; i++)
	{
		for (int j = 2; j >= 0; j=j-1)
		{
			a[1][i] = mat[j][1];
		}

	}
*/
	a[1][0] = mat[2][1]; 
	a[1][1] = mat[1][1];
	a[1][2] = mat[0][1];

	a[2][0] = mat[2][2];
	a[2][1] = mat[1][2];
	a[2][2] = mat[0][2];
	/*for (int i = 0; i <= 2; i++)
	{
		for (int j = 2; j >= 0; j=j-1)
		{
			a[2][i] = mat[j][2];
		}

	}*/
	

	return a;
}










