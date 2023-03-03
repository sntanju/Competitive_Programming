#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;

    ofstream file;
    file.open("student_details.txt", ios :: out | ios :: app);

    for(int i = 0; i <=3; i++)
    {

        cout << "Enter Your Name : ";
        getline(cin, name);
        file << name << "\t";

        cout << "Enter Your Age : ";
        cin >> age;
        file << age << endl;
        cin.ignore();

    }
    file.close();

    getch();
    return 0;
}
