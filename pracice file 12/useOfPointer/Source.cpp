#include<iostream>
using namespace std;
void mySwap(int * a, int * b);


int main()
{
	int x  , y  ;
	cout << "enter x:"; 
	cin>> x;
	cout << "enter y:"  ;
	cin >> y ;
	mySwap(&x, &y);
	cout << "x is: "<<x << endl;
	cout << "y is: "<< y << endl ;
	

	return 0;

}
  void mySwap(int * a, int * b)
{

	int temp = * a;
	*a = *b;
	*b = temp;
}