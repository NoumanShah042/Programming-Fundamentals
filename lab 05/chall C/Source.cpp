#include<iostream>
using namespace std;
int main()
{
	long long int num;
	int quot;
	cout << "Enter Card Number : ";
	cin >> num;
	if (num / 1000000000000000 == 0)          // for 15 length
	{
		quot = num / 10000000000000;
		if (quot == 34 || quot == 37)     //for amex
		{
			cout << "Vendor is AMEX";
		}
		

	
	}
	 
	if (num / 10000000000000000 == 0)            //for 16 length
	{
		quot = num / 1000000000000;                //return 4 int
		if(quot==6011) 
		{
			cout << "vendor is Discover";
		}
		else
		{  
			quot = quot / 100;                    //ret 2 int
				if (quot == 51 || quot == 52 || quot == 53 || quot == 54 || quot == 55)                       //for master
				{
					cout << "vendor is Mastercard";
				}
				else
				{
					quot = quot / 10;                  // return 1 int
					if (quot==4)
					{
						cout << "vendor is VISA";
					}
					else{ cout << "vendor is unknown"; }
				}
		}
	}


	 if (num / 10000000000000 == 0)        //ret 13 n0
	{
		quot = num / 10000000000000;
		if (quot == 4)
		{
			cout << "vendor is VISA ";
		}
		else{ cout << "vendor is Unknown "; }

	}


	else
	{
		cout << "vendor is Unknown ";
	}
	return 0;
}