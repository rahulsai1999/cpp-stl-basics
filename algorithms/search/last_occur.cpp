#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findLasttOccurenceNaive(vector<int> arr, int x)
{
    for (int i = arr.size() - 1; i > 0; --i)
        if (arr[i] == x)
            return i;
    return -1;
}

int findLastOccurence_BinaryRec(vector<int> arr, int l, int r, int x)
{
    if (l > r)
        return -1;

    int m = l + (r - l) / 2;

    if (arr[m] == x)
    {
        if (m == arr.size() - 1 || arr[m + 1] != x)
            return m;
        else
            return findLastOccurence_BinaryRec(arr, m + 1, r, x);
    }
    else if (arr[m] < x)
    {
        return findLastOccurence_BinaryRec(arr, m + 1, r, x);
    }
    else
        return findLastOccurence_BinaryRec(arr, l, m - 1, x);
}

int findLastOccurence_BinaryIter(vector<int> arr, int l, int r, int x)
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
            if (m == arr.size() - 1 || arr[m + 1] != x)
                return m;
            else
                l = m + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {5, 10, 10, 25, 30, 35, 40, 40, 60, 60, 60, 75};
    cout << findLasttOccurenceNaive(nums, 60) << "\n";
    cout << findLastOccurence_BinaryRec(nums, 0, nums.size() - 1, 60) << "\n";
    cout << findLastOccurence_BinaryIter(nums, 0, nums.size() - 1, 60);
    return 0;
}