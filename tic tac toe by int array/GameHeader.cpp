#include <iostream>
using namespace std;
#include "GameHeader.h"


bool isHorizontal(int a[][3], char symbol)
{
	if (a[0][0] == symbol && a[0][1] == symbol && a[0][2] == symbol ||
		a[1][0] == symbol && a[1][1] == symbol && a[1][2] == symbol ||
		a[2][0] == symbol && a[2][1] == symbol && a[2][2] == symbol)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isVertical(int a[][3], char symbol)
{
	if (a[0][0] == symbol && a[1][0] == symbol && a[2][0] == symbol ||
		a[0][1] == symbol && a[1][1] == symbol && a[2][1] == symbol ||
		a[0][2] == symbol && a[1][2] == symbol && a[2][2] == symbol)
	{
		return true;

	}
	else
	{
		return false;
	}
}
bool isDigonal(int a[][3], char symbol)
{
	if (a[0][0] == symbol && a[1][1] == symbol && a[2][2] == symbol ||
		a[2][0] == symbol && a[1][1] == symbol && a[0][2] == symbol)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void playerTurn(int a[3][3], int cellNo, char symbol)
{

	changeCellValue(a, cellNo, symbol);
	displayArray(a);
}
int anyOneWin(int a[3][3], char symbol)
{

	if (isHorizontal(a, symbol) || isVertical(a, symbol) || isDigonal(a, symbol))
	{

		return true;
	}


	return false;
}
void changeCellValue(int b[3][3], int cellNo, char symbol)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (b[i][j] == cellNo)
			{
				b[i][j] = symbol;
			}
		}
	}
}
void displayArray(int d[3][3])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (d[i][j] >= 1 && d[i][j] <= 9)
			{
				cout << d[i][j] << "  ";
			}
			else
			{
				cout << (char)d[i][j] << "  ";
			}

		}
		cout << '\n';
	}
}
void gameApp()
{
	int cellNo;
	cout << "Player 1 Symbol : X";
	cout << "Player 1 Symbol : Y" << endl;
	int count = 0;
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	displayArray(a);
	int chekThatAnyOneWin = 0;
	bool flag = false;
	for (int i = 1; i <= 9 && flag != true; i++)
	{

		if (i % 2 && flag != true)
		{
			cout << "\nPlayer 1 Turn : Enter Cell # :";      //1
			cin >> cellNo;
			playerTurn(a, cellNo, 'X');
			flag = anyOneWin(a, 'X');
			if (flag == true)
			{
				cout << "\nPlayer 1 wins";
			}
		}
		else if (i % 2 == 0 && flag != true)
		{

			cout << "\nPlayer 2 Turn : Enter Cell # :";    //2
			cin >> cellNo;
			playerTurn(a, cellNo, 'Y');
			flag = anyOneWin(a, 'Y');
			if (flag == true)
			{
				cout << "\nPlayer 2 wins";
			}
		}
	}
	if (flag == false)
	{
		cout << "\nNo winner";
	}
}