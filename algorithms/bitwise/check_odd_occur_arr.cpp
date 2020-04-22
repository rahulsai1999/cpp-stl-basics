#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// given an array of integers, print the only one odd time recurring integer
int findOdd(vector<int> arr)
{
    int res = 0;
    for (int i = 0; i < arr.size(); ++i)
        res = res ^ arr[i];
    return res;
}

//given an array of n numbers that has range from 1 to n-1,
//find the missing number if each number in the range occurs exactly once
int findMissing(vector<int> arr)
{
    int res = 0;
    int comp = 0;
    // xor of all num in arr
    for (int i = 0; i < arr.size(); ++i)
        res = res ^ arr[i];
    // xor of all num in 1 to n+1
    for (int i = 1; i <= arr.size() + 1; ++i)
        comp = comp ^ i;
    return res ^ comp;
}

int main()
{
    vector<int> a = {1, 4, 5, 1, 5};
    vector<int> b = {1, 2, 4, 5};
    cout << findOdd(a) << endl;
    cout << findMissing(b) << endl;
    return 0;
}