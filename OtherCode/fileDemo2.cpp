#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string line;

    ifstream file("student_details.txt");

    while(getline(file, line))
    {

        cout << line << endl << endl;
    }
    file.close();

    getch();
    return 0;
}

