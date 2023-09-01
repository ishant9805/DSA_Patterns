#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << char(65 + j);
		}
		for (int j = i-1; j > 0; j--)
		{
			cout << char(64 + j);
		}
		
		
		
		cout << endl;
	}
	
	return 0;
}