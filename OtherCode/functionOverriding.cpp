#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am a Person..." << endl << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << "I am a Teacher..." << endl << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I am a Student..." << endl << endl;
    }
};
int main()
{
    Person p1;
    p1.display();

    Teacher t1;
    t1.display();

    Student s1;
    s1.display();
    getch();
    return 0;
}
