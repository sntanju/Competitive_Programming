#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display1()
    {
        cout << "Name Is " << name << endl;
        cout << "Age Is " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;

    void display2()
    {
        cout << "ID Is " << id << endl;
        display1();
        /*
        cout << "Name Is " << name << endl;
        cout << "Age Is " << age << endl;
        */
    }
};

int main()
{
    Student firstStudent;

    firstStudent.id = 101;
    firstStudent.name = "Sanjida Nasrin";
    firstStudent.age = 20;
    firstStudent.display2();

    getch();
    return 0;
}


