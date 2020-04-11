#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunc(int i, int j)
{
    return (i == j);
}

int main()
{
    vector<int> ints = {5, 20, 5, 30, 30, 20, 10, 10, 20};
    vector<int>::iterator it;

    //adjacent find: searches the range for the first occurence of two consecutive elements
    it = adjacent_find(ints.begin(), ints.end(), myfunc);
    cout << *it << "\n";

    it = ints.begin();

    //all-of: checks all the elements in the range
    //any-of: check if any element is in the range (same format)
    //also an example of a lambda function in C++
    if (all_of(ints.begin(), ints.end(), [](int i) { return i < 40; }))
        cout << "All are less than 40 \n";

    //binary-search: does what it says, apply to a sorted array
    sort(ints.begin(), ints.end());
    if (binary_search(ints.begin(), ints.end(), 5))
        cout << "Found 5";

    return 0;
}