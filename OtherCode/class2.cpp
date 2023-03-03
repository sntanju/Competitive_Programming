
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
};

int main()
{
    student mina;
    mina.id = 2;
    mina.gpa = 3.98;
    mina.display();

    student abul;
    abul.id = 5;
    abul.gpa = 4.35;
    abul.display();

    getch();
    return 0;
}
