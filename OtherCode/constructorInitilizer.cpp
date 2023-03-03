#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admissionFee;
    const int examFee;
    int id;

    Student(int x, int y, int z)
    : admissionFee(x), examFee(y)

    {
        cout << "Admission Fee = " << admissionFee << endl << endl;
        cout << "Exam Fee = " << examFee << endl << endl;
        id = z;
        cout << "Id Is " << id;
    }
};

int main()
{
    Student stu1(1230, 750, 6);
    getch();
    return 0;
}
