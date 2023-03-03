#include<iostream>
#include<conio.h>
using namespace std;

void addition(int, int);
void substration(int, int);
void multiplication(int, int);
void divition(int, int);

int main()
{
    addition(20,10);
    substration(40,30);
    multiplication(15, 10);
    divition(50,20);

    cout << "All Functions Are Called" <<endl;

    getch();
    return 0;
}

void addition(int a, int b)
{
    int sum = a + b;
    cout << "Sum IS : " << sum <<endl;
}

void substration(int a, int b)
{
    int sum = a - b;
    cout << "Substration IS : " << sum <<endl;
}

void multiplication(int a, int b)
{
    int sum = a * b;
    cout << "Multiplication IS : " << sum <<endl;
}

void divition(int a, int b)
{
   double sum = (float)a / b;
    cout << "Divition IS : " << sum <<endl;
}
