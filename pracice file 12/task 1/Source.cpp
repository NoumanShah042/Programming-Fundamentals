
#include<iostream>
#include<ctime>
using namespace std;

void getRandomCapitalAlpha();
void getRandomSmallAlpha();
void getRandomDigit();
void getRandomAlphaNumeric();

int main()
{
	srand(time(0));
	
	getRandomAlphaNumeric(); cout << endl;
	getRandomAlphaNumeric(); cout << endl;
	getRandomAlphaNumeric(); cout << endl;
	getRandomAlphaNumeric();cout << endl;
	
	return 0;

}

void getRandomCapitalAlpha()
{
	srand(time(0));
	char a;
	a = (rand() % 25) + 'A';
	cout << a ;
}

void getRandomSmallAlpha()
{
	srand(time(0));
	char a;
	a = (rand() % 25) + 'a';
	cout<<a;
}

void getRandomDigit()
{
	srand(time(0));
	int a;
	a = (rand() %10 );
	cout<< a;
}

void getRandomAlphaNumeric()
{

	int a;
	srand(time(0));
	a = (rand() % 3);

	if (a == 0)
	{
		 getRandomDigit();
	}

	else if (a == 1)
	{
		return getRandomCapitalAlpha();

	}
	else 
	{
		return getRandomSmallAlpha();

	}


}
























