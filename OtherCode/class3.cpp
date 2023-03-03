
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;

    void display()
    {
         cout << id << endl << gpa << endl;
    }

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student mina, abul;

    mina.setValue(4, 3.57);
    mina.display();

    abul.setValue(7, 2.33);
    abul.display();

    getch();
    return 0;
}

