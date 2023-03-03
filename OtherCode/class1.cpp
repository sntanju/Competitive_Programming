#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;
};

int main()
{
    student mina;
    mina.id = 2;
    mina.gpa = 3.98;

    cout << mina.id << endl << mina.gpa << endl;

    student abul;
    abul.id = 5;
    abul.gpa = 4.35;

    cout << abul.id << endl << abul.gpa << endl;

    getch();
    return 0;
}
