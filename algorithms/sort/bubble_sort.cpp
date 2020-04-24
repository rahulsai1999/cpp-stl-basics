#include <iostream>
#include <bits/stdc++.h>
#include "custom_io.cpp"
using namespace std;

void bubbleSortAsc(vector<int> &a)
{
    int temp;
    int n = a.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

void bubbleSortDesc(vector<int> &a)
{
    int temp;
    int n = a.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main()
{
    vector<int> a = getInputArray();
    cout << "Ascending Order: ";
    bubbleSortAsc(a);
    printArray(a);
    cout << "Descending Order: ";
    bubbleSortDesc(a);
    printArray(a);
    return 0;
}