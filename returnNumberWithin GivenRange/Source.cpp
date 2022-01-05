#include<iostream>
#include<ctime>
using namespace std;
int randomBetween(int,int);


int main()
{  



	int upper, lower,result=0;
	cout << "input lowerbound :";
	cin >> lower;
	cout << "input upperbound :";
	cin >> upper;
	
	//result = randomBetween(lower, upper);
	//cout << "random Number between is :" << result;
	cout<< randomBetween(lower, upper);
	cout << randomBetween(lower, upper);
	cout << randomBetween(lower, upper);
	cout << randomBetween(lower, upper);
	return 0;
}

int randomBetween(int lowerBound, int upperBound)
{
	int randomBet;

	if(lowerBound== upperBound)
	{
		 randomBet = upperBound;
		
	
	}
	else
	{
		srand(time(0));
		 randomBet = rand() % (upperBound - lowerBound) + lowerBound;
	}

	return  randomBet;

	

}








