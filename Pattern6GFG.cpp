#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}