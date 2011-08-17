#include <iostream>
#include <cstdlib>
#include <algorithm>
#define MAX 100000

using namespace std;
int gcd(int a, int b);

int main()
{
	while(true)
	{
		int T, Q, VT[MAX];
		cin >> T >> Q;
		if (!T && !Q)
			break;
		int ii, d = -1;
		for (ii = 0; ii < T; ii++)
		{
			cin >> VT[ii];
			if ((ii == 0) || (VT[ii] - VT[0] == 0))
				continue;
			if (d == -1)
				d = 2 * abs(VT[ii] - VT[0]);
			else
				d = gcd(2 * abs(VT[ii] - VT[0]), d);
		}
		
		for (ii = 1; ii <= Q; ii++)
		{
			int S, D;
			bool band = false;
			cin >> S >> D;
			if ((d == -1) && ((2 * VT[0] - S) == D))
				band = true;
			else if (d != -1)
			{
				if (abs(D - S) % d == 0)
					band = true;
				else
					for (int jj = 0; jj < T; jj++)
						if (((2 * VT[jj] - S) == D) || (abs(2 * VT[jj] - D - S) % d == 0))
						{
							band = true;
							break;
						}
			}
			
			if (band)
				cout << "Y";
			else
				cout << "N";
			if (ii < Q)
				cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
 
int gcd(int a, int b)
{
	int temp;
	
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
