#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = i; j < n - 1; j++)
		{
			cout << "*";
		}
		int k = n - i + 1;
		for (int j = 0; j < k - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}