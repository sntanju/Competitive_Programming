#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    for (int i = 0; i <5; i++)
    {
    int randomNumber = rand() % 5 + 1;
    cout << "Random Number = " << randomNumber << endl;
    }
    getch();
    return 0;
}
