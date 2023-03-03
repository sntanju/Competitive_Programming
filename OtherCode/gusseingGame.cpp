#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    while(1){

    int guessNumber, randomNumber;
    randomNumber = 1 + rand() % 5;

    cout << "Enter Your Guessing Number Between 1 To 5: ";
    cin >> guessNumber;


    if(guessNumber == randomNumber)
        {
        cout << "You Have Won!!" << endl << endl;
        }
    else
    {
       cout << "You Have Lost. Try Again" << endl;
       cout << "Random Number Was " << randomNumber << endl << endl;
    }

    }
    getch();
    return 0;
}
