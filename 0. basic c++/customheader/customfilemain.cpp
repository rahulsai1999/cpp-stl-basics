#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "customfile.h"

using namespace std;

main()
{
    int a = 5;
    int b = 3;

    cout << calcAdd(a, b);
    cout << calcSub(a, b);

    return 0;
}