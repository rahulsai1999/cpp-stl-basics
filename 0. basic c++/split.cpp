#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

vector<string> split(string s)
{
    vector<string> res;
    string x = "";
    char q = ' ';
    for (int i = 0; i < s.size(); ++i)
    {
        char e = s[i];
        if (e != q)
            x += e;
        else
        {
            res.push_back(x);
            x = "";
        }
    }
    res.push_back(x);

    return res;
}

int main()
{
    string x = "Hello this is an example";
    vector<string> y = split(x);
    for_each(y.begin(), y.end(), [](string i) {
        cout << i << "\n";
    });
}