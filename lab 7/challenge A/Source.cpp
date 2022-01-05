#include<iostream>
#include<ctime>
using namespace std;

int generateRandomNumber(int, int);

int main()
{

	
	int lower, upper,randomNum;
	cout << "Enter Lower Bound Number :";
	cin >>lower ;
	cout << "Enter Upper Bound Number :";
	cin >> upper;

	randomNum = generateRandomNumber(lower,upper);
	cout << "Random Num Is : " << randomNum;
	return 0;
}


int generateRandomNumber(int lowerBound, int upperBound)
{
	srand(time(0));
	int numberWithInRange = upperBound + (rand() % lowerBound);
	numberWithInRange = numberWithInRange - lowerBound/2;
	return  numberWithInRange;


}