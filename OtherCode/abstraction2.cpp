#include<iostream>
#include<conio.h>
using namespace std;

class A
{
private:
    int id = 101;
    string name = "Sanjida";
public:
    friend class B;
};

class B
{
public:

    void display(A object)
    {
        cout << "My ID Is " << object.id << endl << endl;
        cout << "My Name Is " << object.name << endl << endl;
    }
};

int main()
{
    A object1;
    B object2;

    object2.display(object1);
    getch();
    return 0;
}
