#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Count
{
private:
    int real, imag;

public:
    //unary operator
    void operator++()
    {
        real++;
        imag++;
    }

    //binary operator
    void operator+(Count A);

    //use this kind of constructor to avoid
    //defining multiple constructors
    Count(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend ostream &operator<<(ostream &out, const Count &c);
    friend istream &operator>>(istream &in, Count &c);
};

//overloading the stream insertions operator
ostream &operator<<(ostream &out, const Count &c)
{
    out << c.real;
    out << "+i" << c.imag << "\n";
    return out;
}

//overloading the stream extraction operator
istream &operator>>(istream &in, Count &c)
{
    cout << "Enter the real part: ";
    in >> c.real;
    cout << "\nEnter the imaginary part: ";
    in >> c.imag;
    return in;
}

void Count::operator+(Count A)
{
    real += A.real;
    imag += A.imag;
}

int main()
{
    Count A(7, 5);
    Count B;

    //usage of operators
    cin >> B;
    ++A;
    A + B;
    cout << A;

    return 0;
}