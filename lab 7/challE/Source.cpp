#include<iostream>
using namespace std;



int triangularNumber(int);
int triangularNumber(int num)
{

	int counter, sum;
	counter = 1;
	sum = 0;
	while (counter <= num)
	{
		sum = sum + counter;
		counter = counter + 1;
	}

	return sum;
}

//void giveFactors(int num);
void printFactors(int num)
{

	int counter=1, a;
	while (counter <= num)
	{
			a=num%counter
	}   



}




int main()
{
	int number,a;
	cout << "enter num";
	cin >> number;
	a = triangularNumber(number);

	cout << a;
}








