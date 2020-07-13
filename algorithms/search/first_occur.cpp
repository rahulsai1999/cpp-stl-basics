#include <iostream>
#include <bits/stdc++.h>
#include "custom_io.cpp"

using namespace std;

int findFirstOccurenceNaive(vector<int> arr, int x)
{
    for (int i = 0; i < arr.size(); ++i)
        if (arr[i] == x)
            return i;
    return -1;
}

int findFirstOccurence_BinaryRec(vector<int> arr, int l, int r, int x)
{
    if (l > r)
        return -1;

    int m = l + (r - l) / 2;

    if (arr[m] == x)
    {
        if (m == 0 || arr[m - 1] != x)
            return m;
        else
            return findFirstOccurence_BinaryRec(arr, l, m - 1, x);
    }
    else if (arr[m] < x)
    {
        return findFirstOccurence_BinaryRec(arr, m + 1, r, x);
    }
    else
        return findFirstOccurence_BinaryRec(arr, l, m - 1, x);
}

int findFirstOccurence_BinaryIter(vector<int> arr, int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] > x)
            r = m - 1;
        else if (arr[m] < x)
            l = m + 1;
        else
        {
            if (m == 0 || arr[m - 1] != x)
                return m;
            else
                r = m - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {5, 10, 10, 25, 30, 35, 40, 40, 60, 60, 60, 75};
    cout << findFirstOccurenceNaive(nums, 10) << "\n";
    cout << findFirstOccurence_BinaryRec(nums, 0, nums.size() - 1, 10) << "\n";
    cout << findFirstOccurence_BinaryIter(nums, 0, nums.size() - 1, 10);
    return 0;
}