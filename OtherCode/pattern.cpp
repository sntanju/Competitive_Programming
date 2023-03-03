#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, row, col;
    cout << " Please Enter The Number Of Total Line: ";
    cin >> n;

    for(row=0; row<=n; row++){
        for(col=0; col <=row; col++) {
            cout << " " << col;
        }
        cout << endl;
    }

    getch();
    return 0;
}
