#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//check if the k'th bit from the right is set or not

//using left shift
void KthBitL(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

//using right shift
void KthbitR(int n, int k)
{
    if ((n >> (k - 1) & 1) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    KthBitL(5, 3);
    KthbitR(9, 3);
}