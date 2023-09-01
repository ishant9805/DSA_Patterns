#include<iostream>
using namespace std;

int main() 
{
	int n;
	n =  8;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << "" << endl;
	}
	
	return 0;
}