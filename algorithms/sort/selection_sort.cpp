#include <iostream>
#include <bits/stdc++.h>
#include "custom_io.cpp"
using namespace std;

void selectionSortAsc(vector<int> &a)
{
    int n = a.size();
    int temp;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n - 1; ++j)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main()
{
    vector<int> a = getInputArray();
    selectionSortAsc(a);
    printArray(a);

    return 0;
}