#include<iostream>
using namespace std;

int main()
{
    int n = 5;
	// Lower Portion
	for (int i = n-1; i > 0; i--)
	{
		// Lower Left
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		// Space for Lower Left
		for (int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		// Space for Lower Right
		for (int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		// Lower Right Pattern
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		
		cout << endl;
	}
    // Upper portion
	for (int i = 0; i < n; i++)
	{
		// Upper Left
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		// Space for Upper Left
		for (int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		// Space for Upper Right
		for (int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		// Upper Right Pattern
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		
		cout << endl;
	}
    return 0;
}
