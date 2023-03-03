#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string name;

    ofstream file;
    file.open("student.txt", ios :: out | ios :: app);

    cout << "Enter Your name : ";
    getline( cin, name);

    file << "Welcome " << name << endl;

    cout << "Data Is Stored";
    file.close();

    getch();
    return 0;
}



