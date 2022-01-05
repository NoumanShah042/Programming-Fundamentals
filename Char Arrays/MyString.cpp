#include<iostream>
using namespace std;


int getStringLength(const char * p)
{
	int stringLength = 1;
	for (int i = 0; p[i] != 0; i++)
	{
		stringLength += 1;
	}
	return stringLength;
}

void dispaySting2(char a[])
{
	for (int i = 0; a[i] != 0; i++)
	{
		cout << a[i];
	}


}

void displayString(char x[], int stringLength)
{
	for (int i = 0; (i < stringLength && x[i] != '\0'); i++)
	{
		cout << x[i];
	}
}

void copyString(char * destination, char * sourse)
{
	int i = 0;
	for (; *(sourse + i) != 0; i++)                            // *(sourse + i)=sourse[i]
	{
		*(destination + i) = *(sourse + i);
	}

	*(destination + i) = 0;
}

int convertToInt(const char * source)
{
	int num, sum = 0;
	for (int i = 0; source[i] != 0; i++)
	{
		num = source[i] - '0';
		sum = (sum * 10) + num;
	}
	return sum;
}

void makeUpper(char *destination)
{
	for (int i = 0; destination[i] != '\0'; i++)
	{
		destination[i] = destination[i] - 32;
	}
}

void makeLower(char *destination)
{
	for (int i = 0; destination[i] != '\0'; i++)
	{
		destination[i] = destination[i] + 32;
	}
}
