#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>

using namespace std;

int main()
{
    map<int, string> m{{1, "yes"}, {2, "no"}, {3, "maybe"}};

    cout << m.at(1) << "\n";
    cout << m.at(2) << "\n";
    cout << m[3] << "\n";

    m[3] = "nope";

    cout << m[3] << "\n";

    //insert functions

    m.insert(pair<int, string>(4, "qwerty"));
    m.insert(make_pair(5, "asdfgh"));

    cout << m[4] << "\n";
    cout << m[5] << "\n";

    map<int, string>::iterator i, j;
    i = m.find(2);
    j = m.find(5);

    map<int, string> newM;
    newM.insert(i, j);

    cout << m[5] << "\n";

    map<int, string>::iterator k;
    k = m.begin();
    cout << k->first;
    cout << k->second;

    return 0;
}