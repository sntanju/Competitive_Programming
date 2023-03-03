#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    string name;

    Student(string name)
    {
        this -> name = name;
    }
    void display()
    {
        cout << name << endl;

    }

};

int main()
{
    Student s1("Sanjida");
    s1.display();

    getch();
    return 0;
}

