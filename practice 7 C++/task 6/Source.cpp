#include<iostream>
using namespace std;
int main()
{
	int a, b = 2;
	float c = 4.2;

	a = b * c;       //ans of b*a will be in float but int variable 'a' store only its integer part

	cout << a;
	return 0;
}