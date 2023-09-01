#include<iostream>
using namespace std;

int Pattern1(int n) 
{
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

int Pattern2(int n) 
{
	int i,j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "" << endl;
	}
	return 0;
}

int Pattern3(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int Pattern4(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

int Pattern5(int n) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

int Pattern6(int n) 
{
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

int Pattern7(int n) 
{
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

int Pattern8(int n) 
{
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

int Pattern9(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "* " ;
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " " ;
		}
		for (int j = n; j >= i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}

int Pattern10(int n) 
{
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

int Pattern11(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if ((i+j) % 2 == 0)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
			
		}
		cout << endl;
		
	}
	
	return 0;
}

int Pattern12(int n) 
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int j = i; j < n; j++)
		{
			cout << " " << " ";
		}
		for (int j = n - i; j > 0; j--)
		{
			cout << " " << " ";
		}
		for (int j = i; j > 0; j--)
		{
			cout << j << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}

int Pattern13(int n) 
{
	int nk = 0;
	int kk = 0;
	for (int i = 1; i <= n; i++)
	{
		nk = kk;
		for (int j = 1; j <= i; j++)
		{
			nk += 1;
			cout << nk << " ";
		}
		
		kk = nk;
		cout << endl;
	}
	
	return 0;
}

int Pattern14(int n) 
{
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

int Pattern15(int n) 
{
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		// A = 65
		for (int j = n, k = 0; j >= i; j--, k++)
		{
			cout << char(65 + k);
		}
		cout << endl;
	}
	
	return 0;
}

int Pattern16(int n) 
{
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

int Pattern17(int n) 
{
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

int Pattern18(int n) 
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j >= i; j--)
		{
			cout << char(64 + j) << " ";
		}
		cout << endl;
	}
	
	return 0;
}

int Pattern19(int n) 
{
	// A =  65 
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
	// Lower Portion
	for (int i = n-1; i >= 0; i--)
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
	return 0;
}

int Pattern20(int n)
{
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

int Pattern21(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == n - 1)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "*";
			}
			
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (j == 0 || j == n - 1)
				{
					cout << "*";
				}
				else cout << " ";
				
			}
			
		}
				
		cout << endl;
	}
    return 0;
}

int Pattern22(int n)
{
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

int main()
{
    int n, pattNum;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter Pattern number: ";
    cin >> pattNum;
    switch (pattNum)
    {
    case 1:
        Pattern1(n);
        break;
    case 2:
        Pattern2(n);
        break;
    case 3:
        Pattern3(n);
        break;
    case 4:
        Pattern4(n);
        break;
    case 5:
        Pattern5(n);
        break;
    case 6:
        Pattern6(n);
        break;
    case 7:
        Pattern7(n);
        break;
    case 8:
        Pattern8(n);
        break;
    case 9:
        Pattern9(n);
        break;
    case 10:
        Pattern10(n);
        break;
    case 11:
        Pattern11(n);
        break;
    case 12:
        Pattern12(n);
        break;
    case 13:
        Pattern13(n);
        break;
    case 14:
        Pattern14(n);
        break;
    case 15:
        Pattern15(n);
        break;
    case 16:
        Pattern16(n);
        break;
    case 17:
        Pattern17(n);
        break;
    case 18:
        Pattern18(n);
        break;
    case 19:
        Pattern19(n);
        break;
    case 20:
        Pattern20(n);
        break;
    case 21:
        Pattern21(n);
        break;
    case 22:
        Pattern22(n);
        break;
    default:
        break;
    }
    return 0;
}