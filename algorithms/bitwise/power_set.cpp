#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// generate powerset for a given string O(2^n * n)
void powerSet(string x)
{
	int n = x.length();
	cout << n;
	int powSize = pow(2, n);
	for (int c = 0; c < powSize; c++)
	{
		for (int j = 0; j < n; ++j)
		{
			if (c & (1 << j))
				cout << x[j];
		}
		cout << "\n";
	}
}

int main()
{
	powerSet("abc");
	return 0;
}