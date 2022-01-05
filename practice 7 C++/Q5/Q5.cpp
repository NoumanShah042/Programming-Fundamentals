#include<iostream>
using namespace std;
int main()

{
	int units = 27777777;
	float mass;
	double weight;

	cout << "enter mass";
	cin >> mass;
	

	weight = mass * units;   //value of unit is temporarily changed into float and its result will change in double
	cout << "weight= " << weight<<endl;
	cout << "mass=" << mass << endl;
	
	cout << "units=" << units << endl << endl << endl << endl << endl;

	return 0;
}