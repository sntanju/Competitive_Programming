#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, c, d, e, f, totalSum, average;
    int sum = 0;
    totalSum = 0;


    cin >> a >> b >> c >> d >> e >> f;

    if( a >= 0) {
        sum = sum + 1;
        totalSum = totalSum + a;
    }

    if( b >= 0) {
        sum = sum + 1;
        totalSum = totalSum + b;
    }

    if( c >= 0) {
        sum = sum + 1;
        totalSum = totalSum + c;
    }

    if( d >= 0) {
        sum = sum + 1;
        totalSum = totalSum + d;
    }

    if( e >= 0) {
        sum = sum + 1;
        totalSum = totalSum + e;
    }

    if( f >= 0) {
        sum = sum + 1;
        totalSum = totalSum + f;
    }

    average = totalSum / sum;

    cout << sum << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}

