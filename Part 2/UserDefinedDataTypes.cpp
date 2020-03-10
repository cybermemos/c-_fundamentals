#include <iostream>
// Need to add the
#include <string>

using namespace std;

struct STUDENT
{ // Declare STUDENT struct type consists of 3 data types.
    int age;
    float marks;
    string name;
};

enum GRADE
{
    PASS = 'P',
    FAILED = 'F',
    ABSENT = 'A'
};

// The class : CalculateStudentGrades
class CalculateStudentGrades
{
public: // Access specifier
    STUDENT studentStruct;
    void calculate()
    {
        // impl. of the calculate functoin
    }

private:
    GRADE finalGrades;
    string studentID;
    float finalMarks;
};

int main()
{
    STUDENT newStudent;
    newStudent.age = 20;
    newStudent.marks = 80;
    newStudent.name = "Ann Fixma";

    cout << newStudent.name;
    return 0;
}