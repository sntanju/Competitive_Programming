#include<iostream>
using namespace std;

int main()
{
    int a, b, c, test;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> a >> b >> c;

        if(a > b && a < c) {
            cout << a << endl;
        }
        else if( a > c && a < b ) {
            cout << a << endl;
        }



        else if( b > a && b < c ) {
            cout << b << endl;
        }
        else if( b > c && b < a ) {
            cout << b << endl;
        }

        else if( c > a && c < b ) {
            cout << c << endl;
        }

        else if( c > b && c < a ) {
            cout << c << endl;
        }

    }
    return 0;
}
