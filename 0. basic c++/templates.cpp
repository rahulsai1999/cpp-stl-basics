#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

template <class T>

//function template
//write normal function like with int or any datatype

T large(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}

//class template
//write a normal class with int or float and just change the datatype
template <class G>
class Calculator
{
public:
    G n1, n2;

    Calculator(G a, G b)
    {
        n1 = a;
        n2 = b;
    }

    G add()
    {
        return n1 + n2;
    }
    G subtract()
    {
        return (n1 > n2) ? n1 - n2 : n2 - n1;
    }
};

int main()
{
    float a = 2.13, b = 7.89;
    Calculator<int> p(3, 4);
    cout << p.add() << "\n"
         << large(a, b);
    return 0;
}