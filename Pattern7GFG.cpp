#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		int k = n - i + 1;
		for (int j = 0; j < k; j++)
		{
			cout << "*";
		}
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}