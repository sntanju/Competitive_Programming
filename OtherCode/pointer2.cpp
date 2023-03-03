#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1 = 50;
    int num2 = 40;

    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;
    cout << sum;

    getch();
    return 0;

}

