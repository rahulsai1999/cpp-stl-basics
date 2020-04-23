#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> getInputArray()
{
    // generic input code
    vector<int> a;
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }
    return a;
}

void printArray(vector<int> a)
{
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}