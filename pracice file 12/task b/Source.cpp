#include <iostream>
using namespace std;


bool isPrime(int num);
bool isPathagoreanPrime(int);

int main()
{	
	int a ;
	cout << "enter number:";
	cin >>a;
	
	 cout<<isPathagoreanPrime(a)<<endl;

}

bool isPrime(int num)

{
	int i = 2, count = 0;



	while (i <= num)
	{
		if (num%i == 0)
		{
			count = count + 1;


		}
		
		i = i + 1;
	}

	if (count == 1)
	{
		return true;
	}
	else
	{

		return false;
	}
}

bool isPathagoreanPrime(int number)
{
	int a;
	a = isPrime(number);
	bool flag;

	if  (a==1)
	{ 
		int i = 1, check;
		
		while (i<=number)

		{
			check = 4 * i + 1;
			if (check == number)
			{
				//cout << "true";
				flag = true;

				return flag;

			}
			
			i = i + 1;
		}
		
		
		//cout << "false";
		flag = false;
		return flag;
		

	}
	else
	{
		//cout << "false";
		flag = false;
		return flag;
	}



}











