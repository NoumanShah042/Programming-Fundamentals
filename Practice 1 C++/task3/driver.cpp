#include<iostream>
using namespace std;
int main()
{
	float total,salesTax,subTotal,item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
	subTotal = item1 + item2 + item3 + item4 + item5;
	salesTax = subTotal * 0.06;
	total = subTotal + salesTax;
	cout << "price of item 1 = $" << item1 <<endl;
	cout << "price of item 2 = $" << item2 <<endl;
	cout << "price of item 3 = $" << item3 <<endl;
	cout << "price of item 4 = $" << item4 <<endl;
	cout << "price of item 5 = $" << item5 <<endl;
	cout << "subtotal of sale = $" << subTotal<<endl;
	cout << "sales tax = $" << salesTax << endl;
	cout << "Total  = $" << total<<endl;


	return 0;
}