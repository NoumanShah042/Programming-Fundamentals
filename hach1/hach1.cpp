#include<iostream>
using namespace std;
int main()


{     
	int N, L, W, H,i;
	
	cout << "enter values of L and N respectively :";
	cin >> L>>N;
	for (i=1;i<=N;i++)
	{
		cout << "enter H and W respectively:";
		cin >> H >> W;
		if (W < L || H < L)
		{
			cout << "UPLOAD ANOTHER"<<endl;

		}

		else if ((W >= L && H >= L) &&  (W == H))                  
		{
			cout << "Accepted"<<endl;
		}

		else
		{
			cout << "Crop it"<<endl;
		}
	}
	
	
	
	
	
	
	return 0;
	
	
	 }