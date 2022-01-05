#include<iostream>
using namespace std;



void displayCommaSeparate(int num);

int main()
{
	int number;
	cout << "enter num :";
	cin >> number;
	displayCommaSeparate(number);


}







void displayCommaSeparate(int num)
{
	int rem, quot,  count, counter, a, sum, last6, last5, last4, last3, last2, last1;
	
	
	
	quot = num;
	a = 1;
	count = 1;
	
	while (quot >= 1)
	{
		counter = 1;

		sum = 0;
		while (counter <= 3 )
		{
			
			rem = quot % 10;
			quot = quot / 10;
			sum = sum + (rem*a);
			a = a * 10;
			counter = counter + 1;
			
			switch (count)
			{

			case 1:
			{
				last6 = sum;
				break;

			}
			case 2:
			{
				last5 = sum;
				break;

			}
			case 3:
			{
				last4 = sum;
				break;

			}
			case 4:
			{
				last3 = sum;
				break;

			}
			case 5:
			{
				last2 = sum;
				break;

			}
			case 6:
			{
				last1 = sum;
				break;

			}


			}
		}
			count = count + 1;
	}



		switch (count)
		{

		case 2:
		{
			cout << last6;
			break;
		}
		case 3:
		{
			cout << last5 << "," << last6;
			break;
		}

		case 4:
		{
			cout << last4 << "," << last5 << "," << last6;
			break;
		}
		case 5:
		{

			cout << last3 << "," << last4 << "," << last5 << "," << last6;
			break;
		}
		case 6:
		{
			cout << last2 << "," << last3 << "," << last4 << "," << last5 << "," << last6;
			break;
		}
		case 7:
		{
			cout << last1 << "," << last2 << "," << last3 << "," << last4 << "," << last5 << "," << last6;
			break;
		}

		}
	}