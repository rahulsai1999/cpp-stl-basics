#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    stack<int> newStack;
    stack<int> otherStack;

    //push elements or emplace() also can be used
    newStack.push(4);
    newStack.push(3);
    
    otherStack.push(2);
    otherStack.push(5);

    //top(): returns element on top
    cout << newStack.top() << "\n";

    newStack.pop();

    //size() and empty() available for quantity measures
    cout << newStack.size() << "\n";

    //swap() exchanges the elements of two stacks
    newStack.swap(otherStack);

    cout << newStack.size() << "\n";

    return 0;
}