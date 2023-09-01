#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		// A = 65
		for (int j = n, k = 0; j >= i; j--, k++)
		{
			cout << char(65 + k);
		}
		cout << endl;
	}
	
	return 0;
}