#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    double x, y;
    double answer;
    double one = 4.00;
    double two = 4.50;
    double three = 5.00;
    double four =  2.00;
    double five = 1.50;
    cin >> x >> y;

    if( x == 1) {
        answer = one*y;
        cout << "Total: R$ " << fixed << setprecision(2) <<answer << endl;
    }

    if( x == 2) {
        answer = two*y;
        cout << "Total: R$ " << fixed << setprecision(2) <<answer << endl;
    }

    if( x == 3) {
        answer = three*y;
        cout << "Total: R$ " << fixed << setprecision(2) <<answer << endl;
    }

    if( x == 4) {
        answer = four*y;
        cout << "Total: R$ " << fixed << setprecision(2) <<answer << endl;
    }

    if( x == 5) {
        answer = five*y;
        cout << "Total: R$ " << fixed << setprecision(2) <<answer << endl;
    }

    return 0;
}
