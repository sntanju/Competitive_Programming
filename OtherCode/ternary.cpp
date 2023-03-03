#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2, answer;

    cout << "Enter The First Number: ";
    cin >> num1;

    cout << "Enter The Second Number: ";
    cin >> num2;

    answer = (num1 > num2 ? num1 : num2);
    cout<< "The Biggest Number Is: " << answer << endl;

    (answer % 2 == 0) ? cout << " The Answer Is Even" : cout <<" The Answer Is Odd";
    getch();
    return 0;
}
