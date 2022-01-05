#include<iostream>
using namespace std;


void displayValue(int,int,int);

int main()
{

	int e,f,g;
	cout << "enter Number :";
	cin >> e;
	cout << "enter Number :";
	cin >> f ;
	cout << "enter Number :";
	cin >> g;
	
	displayValue(e,f,g);
	cout << "\nnow i am back in the main function"<<endl;

	return 0;
}

void displayValue(int num,int a,int b)
{
	cout << "you enter " << num<< " "<<a << " "<<b << " ";

}

