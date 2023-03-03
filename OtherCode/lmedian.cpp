#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c,first, second, third;
    cin >> a >> b >> c;

    if( a == b && a == c) {
        cout << "Yes" << endl;
         return 0;
    }

    else if( a < b && a < c) {
        first = a;
        if( b < c ) {
            second = b;
            third = c;
        }
        else{
            second = c;
            third = c;
        }
    }

    else if( b < a && b < c ) {
        first = b;
        if( a < c ) {
            second = a;
            third = c;
        }

        else{
            second = c;
            third = a;
        }
    }

    else if( c < a && c < b) {
        first = c;
        if( a < b ) {
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    if( second == b ) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}

