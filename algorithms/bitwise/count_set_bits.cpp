#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// given a positive number, return the number of set bits

// naive approach (binary conversion increment)
void countSetNaive(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
            res++;
        n /= 2;
    }
    cout << "Number of Set Bits (Naive): " << res << endl;
}

// right-shift approach
void countSetR(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
            res++; // returns 1 if number if odd i.e last bit set
        n = n >> 1;
    }

    cout << "Number of set bits (Right Shift): " << res << endl;
}

void BrianKerningam(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    cout << "Number of set bits (BK): " << res << endl;
}

int main()
{
    countSetNaive(7);
    countSetR(7);
    BrianKerningam(7);
}