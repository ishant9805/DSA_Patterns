#include<iostream>
using namespace std;

int main()
{
    int n = 5;
	int top, bottom, left, right, minis;
	for (int i = 0; i < 2*n-1; i++)
	{
		for (int j = 0; j < 2*n-1; j++)
		{
			top = i;
			bottom = (2*n-2)-i;
			right = (2*n-2)-j;
			left = j;
			minis = min(min(top,bottom), min(left, right));
			cout << n - minis << " ";
		}
		
		cout << endl;
	}
    return 0;
}
