#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> ints = {5, 20, 5, 30, 30, 20, 10, 10, 20};
    vector<int> temp(9);
    vector<int>::iterator it;

    //count: returns the count of the specified element in range
    int countA = count(ints.begin(), ints.end(), 10);
    cout << countA << "\n";

    //count_if: returns the count according to the function provided
    int countB = count_if(ints.begin(), ints.end(), [](int i) { return i % 2 == 0; });
    cout << countB << "\n";
    
    
    return 0;
}