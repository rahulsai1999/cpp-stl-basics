#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//class definition

class Rectangle
{

public:
    int w, h;
    static int n;
    //default constructor
    Rectangle()
    {
        w = 0;
        h = 0;
    }

    //parameterized constructor
    Rectangle(int a, int b)
    {
        w = a;
        h = b;
    }

    //copy constructor
    Rectangle(Rectangle &a)
    {
        w = a.w;
        h = a.h;
    }

    //in-line function
    void set(int a, int b);

    //in class function
    int area() { return w * h; }
};

//statis member is always constant for all objects
int Rectangle::n = 4;

void Rectangle::set(int a, int b)
{
    w = a;
    h = b;
}

int main()
{
    Rectangle one;
    Rectangle two(2, 4);
    Rectangle three = two;
    cout << one.w << two.h << three.h << three.n;

    return 0;
}
