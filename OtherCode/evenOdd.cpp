#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d, e;

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;


    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    cin >> e ;

    // a
    if( a % 2 == 0) {
        even = even + 1;
    }

    if( a > 0) {
            positive = positive + 1;
    }

    if( a < 0) {
        negative = negative + 1;
    }

    if ( a % 2 != 0) {
        odd = odd + 1;
    }

    //b

    if( b % 2 == 0) {
        even = even + 1;
    }

    if( b > 0) {
        positive = positive + 1;
    }

    if( b < 0) {
        negative = negative + 1;
    }

    if ( b % 2 != 0) {
        odd = odd + 1;
    }
    //c

    if( c % 2 == 0) {
        even = even + 1;
    }

    if( c > 0) {
        positive = positive + 1;
    }

    if( c < 0) {
        negative = negative + 1;
    }

    if ( c % 2 != 0) {
        odd = odd + 1;
    }

    //d

    if( d % 2 == 0) {
        even = even + 1;
    }

    if( d > 0) {
        positive = positive + 1;
    }

    if( d < 0) {
        negative = negative + 1;
    }

    if ( d % 2 != 0) {
        odd = odd + 1;
    }

    // e

    if( e % 2 == 0) {
        even = even + 1;
    }

    if( e > 0) {
        positive = positive + 1;
    }

    if( e < 0) {
        negative = negative + 1;
    }

    if ( e % 2 != 0) {
        odd = odd + 1;
    }


    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

    return 0;
}



