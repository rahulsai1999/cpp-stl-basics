#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;

bool compare_prop(int &s1, int &s2)
{
    return (s1 > s2);
}

int main()
{
    list<int> first{4, 2, 5, 1};
    list<int> second{3, 7, 3, 5};
    list<int>::iterator itr;

    itr = first.begin();

    first.insert(first.begin(), 3);
    first.push_front(2);
    first.pop_back();

    first.sort();
    cout << first.front();

    first.sort(compare_prop);
    cout << first.front();

    first.splice(itr, second);

    cout << first.front();
    cout << second.empty();

    return 0;
}
