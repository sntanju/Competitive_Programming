#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d, e;
    int sum = 0;


    cin >> a >> b >> c >> d >> e;

    if( a % 2 == 0) {
        sum = sum + 1;
    }

    if( b % 2 == 0) {
        sum = sum + 1;
    }

    if( c % 2 == 0) {
        sum = sum + 1;
    }

    if( d % 2 == 0) {
        sum = sum + 1;
    }

    if( e % 2 == 0) {
        sum = sum + 1;
    }


    cout << sum << " valores pares" << endl;

    return 0;
}


