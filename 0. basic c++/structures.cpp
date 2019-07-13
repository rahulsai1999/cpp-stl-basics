#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//definition of a structure
struct name
{
    int number;
    char na[20];
};

//definition of a nested structure
struct Employee
{
    char nameEmp[20];
    int ssn;
    struct Date
    {
        int d, m, y;
    } doj;
};

//another form of structure -- union -- space saving
//takes the size of the largest element rather than the sum of all elements

union student {
    char name[20];
    float decimal;
    int roll;
};

int main()
{
    //basic initialization
    struct name a1 = {1, "Rahul"};
    struct Employee e1 = {"Rahul", 90210, {13, 7, 2019}};

    //structure pointer declaration
    struct name n1 = {2, "JS"};
    struct name *ptr;
    ptr = &n1;

    //union declaration -- only one can be initialized
    union student s1 = {"rahul"};

    //accessing objects using the dot operator
    cout << a1.na << "\n";
    cout << e1.doj.d << "\n";
    cout << s1.name << endl;

    //accessing objects using the pointer arrow
    cout << ptr->number << "\n";
    cout << ptr->na;

    return 0;
}