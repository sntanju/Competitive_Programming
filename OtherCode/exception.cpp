#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    try
    {
        int num1, num2;

        cout << "Enter The First Number: ";
        cin >> num1;

        cout << "Enter The Second Number: ";
        cin >> num2;
        if(num2 == 0)
        {
            throw -1;
        }

        double result = (double)num1 / num2;
        cout << "The Result Is " << result << endl ;
    }
    catch(...)
    {
        cout << "Divide By 0 Is Not Possible.." << endl;
        cout << "Please Try Again.." << endl;
    }

    getch();
    return 0;
}

