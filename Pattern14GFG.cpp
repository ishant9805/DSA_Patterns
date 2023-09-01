#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = 1; i <= n; i++)
	{
		// A = 65
		for (int j = 1; j <= i; j++)
		{
			cout << char(64 + j);
		}
		cout << endl;
	}
	
	return 0;
}