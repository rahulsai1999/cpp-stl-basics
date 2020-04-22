#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// check if the given number is a power of 2

// if at any point of division, the number is odd
bool checkP2Naive(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

int BrianKerningam(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

// check set bits only one
bool checkP2Best(int n)
{
    if (BrianKerningam(n) == 1)
        return true;
    else
        return false;
}

bool checkP2Power(int n)
{
    return (n != 0 && ((n & n - 1)) == 0);
}

int main()
{
    cout << "Naive: " << checkP2Naive(4) << endl;
    cout << "Best: " << checkP2Best(4) << endl;
    cout << "Greatest: " << checkP2Power(4) << endl;
}