#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main()
{
    int x = 3;
    int y = 6;
    int z;

    cout << "X: " << bitset<8>(x).to_string() << endl;
    cout << "Y: " << bitset<8>(y).to_string() << endl;

    //basic bitwise operations

    z = x & y;
    cout << "Bitwise AND Operation: " << z << endl;
    z = x | y;
    cout << "Bitwise OR  Operation: " << z << endl;
    z = x ^ y;
    cout << "Bitwise XOR Operation: " << z << endl;
    z = x << 2;
    cout << "Left Shift Operation: " << z << endl;
    z = z >> 2;
    cout << "Right Shift Operation: " << z << endl;

    // not operation

    unsigned int a = 1;
    cout << "Bitwise NOT Operation (unsigned): " << ~a << endl;

    int b = -7;
    cout << "Bitwise NOT Operation (signed) : " << ~b << endl;

    return 0;
}