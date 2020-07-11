#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include "custom_io.cpp"

using namespace std;

//iterative approach
int binarySearch(vector<int> arr, int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    int e;
    vector<int> nums = getInputArray();

    cout << "\nEnter the element to be searched: ";
    cin >> e;

    sort(nums.begin(), nums.end());

    int res = binarySearch(nums, 0, nums.size() - 1, e);
    cout << "Found Index: " << res;
}