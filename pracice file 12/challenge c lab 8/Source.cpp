#include<iostream>
using namespace std;
long long reversedigits(long long );
bool isPalindrome(long long);
int reverseAndAdd(long long num);

int main()
{
	int num,reverse,iteration;
	cin >> num;
	reverse = reversedigits(num);
	cout << "reverse:";
	cout << reverse<<endl;
	cout << "palindrome:";
	cout << isPalindrome(num)<<endl;
	//iteration=reverseAndAdd(num);
	}
long long  reversedigits(long long a)
{
	long long quot = a;
	long long rem, sum = 0;
	while (quot != 0)
	{
		rem = quot % 10;
		quot = quot / 10;

		sum = (sum * 10) + rem;
	}
	cout << sum << "\n";
	return sum;
}

bool isPalindrome(long long  a)
{

	 long long  b;
	 b = reversedigits(a);
	 if (a == b)
	 {
		 return true;
	 }

	 else
	 {
		 return false;
	 }
}

int reverseAndAdd(long long num)
{
	int a = 0;
	
	int iterations=0;
	int sum = num;
	while (a != 1)
	{	
		                                                             // long long reversedigits(long long);
		long long reverse = reversedigits(sum);													// bool isPalindrome(long long);
		long long sum = sum + reverse;

		a = isPalindrome(sum);
		if (a ==1)
		{
		cout << "palindome =" << sum;

		}
		
		iterations = iterations + 1;
	
	}

	return   iterations;






}






















