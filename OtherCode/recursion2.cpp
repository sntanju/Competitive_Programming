#include<iostream>
#include<conio.h>
using namespace std;

int addingNumbers(int number)
{
    if( number == 0 )
    {
        return 1;
    }
    else if( number == 1 )
    {
        return 1;
    }
    else
    {
        return (number + addingNumbers(number -1));
    }
}

int main()
{
    int number = addingNumbers(5);
    cout << number << endl;
    getch();
    return 0;
}
