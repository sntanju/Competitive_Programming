#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << " I am a Person" << endl << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << " I am a Student" << endl << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << " I am a Teacher" << endl << endl;
    }
};

int main()
{

    Person *p1;
    Student s1;
     Teacher t1;


    p1 = &s1;
    p1 -> display();

    p1 = &t1;
    p1 -> display();

    getch();
    return 0;
}
