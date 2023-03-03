
#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public :
    int id;
    double gpa;

    void display()
    {
         cout << id << endl << gpa << endl;
    }

    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    Student()
    {
        cout << "default constructor" << endl;
    }


};

int main()
{
    Student constractor;

    Student mina(2,3.33);
    mina.display();

    Student abul(5,2.11);
    abul.display();

    getch();
    return 0;
}


