#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int twoDArray[2][3];

    cout << "Enter The Elements For The Matrix: " << endl;

    for ( int row = 0; row < 2; row++ ) {
        for ( int col = 0; col < 3; col++ ) {

                cout << "TwoDArray[" << row << "] [" << col << "] = ";
                cin >> twoDArray[row][col];
        }
    }

    for(int row = 0; row < 2; row++) {
        for ( int col = 0; col < 3; col++) {
            cout << twoDArray[row][col] <<" ";
        }
        cout << endl;
    }

    getch();
    return 0;
}

