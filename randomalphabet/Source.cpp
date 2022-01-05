#include<iostream>
#include<ctime>
using namespace std;
void randomAlphabet();

int main()
{

	char a;
	randomAlphabet();
	randomAlphabet();
	randomAlphabet();
	randomAlphabet();
	randomAlphabet();
	
	cout << endl;

	

	
	 return 0;

}







void randomAlphabet()
{
	srand(time(0));
	char randomSmallAlphabet;
	char randomCapitalAlphabet;

	int i = rand() % 2;

		


		randomCapitalAlphabet = rand() % 26 + 'A';
		randomSmallAlphabet = rand() % 26 + 'a';
	
		if(i)
		cout << randomCapitalAlphabet;
		else
		cout << randomSmallAlphabet;
		
	



}
