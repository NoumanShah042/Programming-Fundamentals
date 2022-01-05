#include<iostream>
using namespace std;
int main()
{
	//char a[10]="ahsghshsg" , ch[10]="abababbab";
	//char b;
	//cout << "enter string;";
	//
	//cin.getline(a,10);
	//cout << "Noumn\a" << a[2] << "Noumn\a" << a[3] << "Noumn\a" << a[4] << "Noumn\a"  << a[5]<<"Noumn\a" << a[6] << a[7];
	//cin.get(b);
	//cout << "b=" << b<<endl;
	//cout << a << endl;
	//cout << ch << endl;

	///*strcpy(ch, a);
	//cout << a << endl; 
	//cout << ch << endl;
	//return 0;*/


	//int a;
	//cin >> a;
	//cin >> a;
	//cin >> a;
	//cin.clear(); 
	///*char s[10];
	//cin >> s;
	//cout << s << endl;*/
	//cin.ignore(10);
	//cout << "nouman";
	//cin >> a;
	//cout << a;





//	program quiz

	/*char a;
	cin >> a;

	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	{
		cout << "yes";

	}
	else
	{
		cout << "no";
	}*/




	int a, b;
	cin >> a>>b;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		int quot1 = a, quot2 = b;
		int d = quot1 % 10; 
		int c = quot2 % 10;
		quot1 = quot1 / 10;
		quot2 = quot2 / 10;

		if (d + c >= 10)
		{
			count = count + 1;
		}

	}


	cout << count;

















	return 0;
}