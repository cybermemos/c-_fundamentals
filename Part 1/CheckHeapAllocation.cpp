// CheckHeapAllocation.cpp
// Use the sizeOf() to check the heap allocation for your variables.

#include <iostream>
using namespace std;

struct STUDENT
{ // Declare STUDENT struct type consists of 3 data types.
    int age;
    float marks;
    string name;
};
 
int main() {
   cout << "char = " << sizeof(char) << endl;
   cout << "int = " << sizeof(int) << endl;
   cout << "float = " << sizeof(float) << endl;
      cout << "long = " << sizeof(long int) << endl;
   cout << "double = " << sizeof(double) << endl;
   cout << "string = " << sizeof(string) << endl;
   cout << "struct STUDENT made of : (int + float + string) = " << sizeof(STUDENT) << endl;
   return 0;
}