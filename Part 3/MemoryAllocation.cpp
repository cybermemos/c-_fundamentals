// including the i/o stream lib.
#include <iostream>

// name space std
using namespace std;
const int x = 25;

int add(int x, int y)
{
    return x + y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{

    int *z = 0;

    // using nothrow to catch errors.
    z = new (nothrow) int;

    *z = 5 + 5;

    cout << *z << " , stored in address = " << &z << endl;

    // remove the unused variable
    delete z;

    cout << *z << " , stored in address = " << &z << endl;

    return 0;
}
