#include <iostream>
#include <bits/stdc++.h>
#include "custom_io.cpp"

using namespace std;

int main()
{
    vector<int> a = getInputArray();
    sort(a.begin(), a.end());
    cout << "Ascending Order ";
    printArray(a);
    cout << "Descending Order ";
    sort(a.begin(), a.end(), greater<int>());
    printArray(a);
    return 0;
}