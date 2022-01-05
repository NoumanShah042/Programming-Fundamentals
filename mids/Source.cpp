#include<iostream>
#include<ctime>

using namespace std;

int f1(int x, int y) {
	if (x > y)
		return y * 10 + 1;
	else
		return x * 5 - 1;
}

int main()
{
	

	//cout << time(NULL) << endl;
	
	time_t t = time(NULL);
	tm curTime = *localtime(&t); cout << "ghsgdshdg"; cout << endl; system("pause");
	cout << curTime.tm_mday << '-' << curTime.tm_mon + 1 << '-' << curTime.tm_year + 1900<<endl;
	cout << curTime.tm_hour << '-' << curTime.tm_min << '-' << curTime.tm_sec;
	
	//system("refresh");
	/*char x = 127;
	cout << x + 5 << "\n";
	char y = x + 20;
	cout << (int)y;
	*/
	/*int d[] = { 2,5,6,7,4,3 };
	int sum = 0;
	for (int j = 1; j < 6; j += 2)
	{
		cout << d[j] << ' ';
		sum = sum + d[j];
	}
	cout <<'\n' <<'sum ' << sum;




	/*




	
	cout << f1(2, 4) <<'\n';
	cout << f1(4, 3) <<'\n';
	cout << f1(0, 0) <<'\n';





	/*const int HELLO_WORLD = 203;

	int x= HELLO_WORLD+1;
	
	cout <<x <<endl;

	/*for (int x = 2; x < 20; x = x + 3) {
		cout << x << ' ' << x / 2 << ' ';

	}

	*/




	/*double a = -2;
	int d = 10;
	int e = 4;
	//cout << (int)' ' << 54646 << " \n" << '\n' << "4353536 \n  ";
	cout << d*e <<' '<< d*a << ' ' <<a*d << ' ' <<d/a << ' ' <<d+a << ' ' << a / d << ' ' <<a-d <<'\n';
	cout << d / e <<' ' <<'\n';
	int m = d * a + sqrt(e);
	cout << m;
	m = d / a;
	cout << m / e;*/


	return 0;
}