#pragma once
void displayArray(int d[3][3]);
void gameApp();
void changeCellValue(int b[3][3], int cellNo, char symbol);
void playerTurn(int a[3][3], int cellNo, char);
int anyOneWin(int a[3][3], char);
bool isHorizontal(int array[][3], char);
bool isVertical(int array[][3], char);
bool isDigonal(int array[][3], char);

void gameApp();
