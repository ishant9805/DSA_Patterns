#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* " ;
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}