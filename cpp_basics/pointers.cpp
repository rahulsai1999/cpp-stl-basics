#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//pass by reference variations
void setValueFive(int &x)
{
    x = 5;
};

void setValueToSix(int *x)
{
    *x = 6;
}

int main()
{
    //normal variable declaration and initialization
    //&number has the memory address of the variable
    int number = 3;
    int x = 1;

    //empty pointer declaration
    //memory addresses always expressed in hexadecimal
    int *numberpointer;

    cout << numberpointer << "\t" << number << "\n";

    //initialization of the pointer with a value
    numberpointer = &number;

    //declaration and initialization in one
    int *numberpointer2 = new int(2);

    //* operator is used for declaring and accessing the variable
    cout << numberpointer << "\t" << *numberpointer << "\n";
    cout << numberpointer2 << "\t" << *numberpointer2 << "\n";

    setValueFive(x);
    cout << "Value: " << x << "\n";
    setValueToSix(&x);
    cout << "Value: " << x << "\n";

    return 0;
}