#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = 1; i <= n; i++)
	{
		// A = 65
		for (int j = 0; j < i; j++)
		{
			cout << char(64 + i);
		}
		cout << endl;
	}
	
	return 0;
}