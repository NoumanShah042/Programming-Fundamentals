#include<iostream>
using namespace std;
int main()
{
	int k, a, b,counter,yen, remBuiscuits, sulemanBuis,totalBuiscuits,i;
	cout << "enter K: ";
	cin >> k ;
	cout << "enter  A: ";
	cin >> a;
	cout << "enter B:";
	cin >> b;
	counter = 1;
	remBuiscuits = 0;
	totalBuiscuits = 1;
	
	yen = 0;
	while (counter <= k)                   //repeat operation k times

	{     
		sulemanBuis = totalBuiscuits;
		sulemanBuis = sulemanBuis + 1;
		i = sulemanBuis;                               //add one buis
		
		
		while (i >= a)                //exchane a bis t0 1 yen
			{
				i = i - a;
				yen = yen + 1;

			}
		
		remBuiscuits = i;

		while (yen != 0)                     //exchange yen to biscuits
		{
			yen = yen - 1;
			remBuiscuits = remBuiscuits + b;
		}


		totalBuiscuits = totalBuiscuits +  remBuiscuits;
		counter = counter + 1;
	}

	cout << "max buis =" << totalBuiscuits;

	return 0;
}