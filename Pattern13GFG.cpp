#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	int nk = 0;
	int kk = 0;
	for (int i = 1; i <= n; i++)
	{
		nk = kk;
		for (int j = 1; j <= i; j++)
		{
			nk += 1;
			cout << nk << " ";
		}
		
		kk = nk;
		cout << endl;
	}
	
	return 0;
}