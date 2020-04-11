#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//macros definition

//constant variable
#define limit 5;

//function with arguments
#define area(l, b) (l * b)

//more complicated function
#define forEach(arr, i) for (i = 0; i < arr.size(); ++i)

using namespace std;

int main()
{
    int i;
    vector<int> arrayex{1, 2, 3, 4, 5};
    forEach(arrayex, i)
    {
        cout << arrayex[i];
    };
    return 0;
}