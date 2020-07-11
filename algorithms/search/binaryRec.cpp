#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include "custom_io.cpp"

using namespace std;

int binarySearchRec(vector<int> arr, int l, int r, int x)
{
    if (l > r)
        return -1;

    int m = l + (r - l) / 2;
    if (arr[m] == x)
        return m;
    else if (arr[m] < x)
        return binarySearchRec(arr, m + 1, r, x);
    else
        return binarySearchRec(arr, l, m - 1, x);
}

int main()
{
    int e;
    vector<int> nums = getInputArray();

    cout << "\nEnter the element to be searched: ";
    cin >> e;

    sort(nums.begin(), nums.end());

    int res = binarySearchRec(nums, 0, nums.size() - 1, e);
    cout << "Found Index: " << res;
}