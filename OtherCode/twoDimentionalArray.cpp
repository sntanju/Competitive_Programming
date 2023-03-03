#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int twoDArray[2][3] = {
        { 10, 20, 30 },
        { 40, 50, 60 }
    };

    /*twoDArray[0][0] = 10;
    twoDArray[0][1] = 20;
    twoDArray[0][2] = 30;

    twoDArray[1][0] = 40;
    twoDArray[1][1] = 50;
    twoDArray[1][2] = 60;
    */

    for(int row = 0; row < 2; row++) {
        for ( int col = 0; col < 3; col++) {
            cout << twoDArray[row][col] <<" ";
        }
        cout << endl;
    }

    getch();
    return 0;
}
