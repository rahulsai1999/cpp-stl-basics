#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <array>

using namespace std;

int main()
{
    array<int, 4> first = {1, 2, 3, 4};
    array<int, 4> second = {3, 2, 1, 4};
    cout << first.at(3);

    first.fill(2);
    cout << first.at(3);

    first.empty() ? cout << first.size() : cout << first.max_size();

    first.swap(second);

    cout << second[3];

    return 0;
}