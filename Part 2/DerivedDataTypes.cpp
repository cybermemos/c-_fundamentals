#include <iostream>

using namespace std;

int getDummyInt()
{
    int dummyInt = 250;
    // Ref. type
    int &refToDummyInt = dummyInt;
    // Pointer type
    int *pointerToDummyInt = &dummyInt;

    // Output the value
    cout << dummyInt << "\n";

    // Output the memory address using Reference
    cout << &refToDummyInt << "\n";

    // Output the memory address using Pointer
    cout << pointerToDummyInt << "\n";
}

int main()
{
    getDummyInt();
    return 0;
}