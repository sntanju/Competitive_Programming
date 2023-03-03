#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
private:
    string name;

public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }


};

int main()
{
    Student s1;
    s1.setName("Sanjida");
    cout << s1.getName();
    getch();
    return 0;
}
