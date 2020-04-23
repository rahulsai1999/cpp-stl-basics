#include <iostream>
#include <bits/stdc++.h>
#include "custom_io.cpp"

using namespace std;

void InsertionSortAsc(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void InsertionSortDesc(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    vector<int> a = getInputArray();
    InsertionSortAsc(a);
    printArray(a);
    InsertionSortDesc(a);
    printArray(a);
    return 0;
}