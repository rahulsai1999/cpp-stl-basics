#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// given an array of integers, print the two odd time recurring integer
void findTwoOdd(vector<int> arr)
{
    //xor of all numbers
    int res = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < arr.size(); ++i)
        res = res ^ arr[i];
    int sm = res & ~(res - 1);

    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] & sm != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << res1 << " " << res2;
}

int main()
{
    findTwoOdd({3, 4, 3, 4, 5, 4, 4, 6, 7, 7});
    return 0;
}