#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    // STRING CLASS USED
    string str1 = "Sanjida ";
    string str2 = "Nasrin";
    string str3;

    str3 = str1;
    cout << "String 3 Is " << str3 << endl << endl;

    str3 = str1 + str2;
    cout << "String 3 Is " <<  str3 << endl << endl;

    int Length = str3.size();
    cout << "Size Of String 3 Is " <<  Length << endl << endl;


    // C STYLE STRING ACTIVITIES

    char name0[] = "Sanjida ";
    char name00[] = "sanjida ";
    char name1[] = "Nasrin ";
    char name2[10];

    // string Compare function
    int value = strcmp(name00, name0);
    cout << "Comparison value is  " << value << endl << endl;
    if(value == 0)
    {
        cout << "Strings Are Equal" << endl << endl;
    }
    else
        cout << "Strings Are Not Equal" << endl << endl;

    // string concat function
    strcat(name0, name1);
    cout << "My Name Is " << name0 << endl << endl;

    // string Uppercase function
    strupr(name0);
    cout << "My Name Is " << name0 << endl << endl;

    // string lowercase function
    strlwr(name0);
    cout << "My Name Is " << name0 << endl << endl;

    // string Copy function
    strcpy(name2, name1);
    cout << "Copied String Name Was " << name2 << endl << endl;

    // string length function
    int len = strlen(name1);
    cout << "The Strings Length Is " << len << endl << endl;
    /*
    char name[30];
    cout << "Enter Your Name Please" << endl ;
    //cin >> name;
    gets(name);
    cout << "Your Name Is " << name << endl;


    char message0[6] = { 'h', 'e', 'l', 'l', 'o' };
    char message1[] = { 'h', 'e', 'l', 'l', 'o', ' ', '1', '\0' };
    char message2[] = "hello 2";

    cout << message0 << endl;
    cout << message1 << endl;
    cout << message2 << endl;
    */

    getch();
    return 0;
}
