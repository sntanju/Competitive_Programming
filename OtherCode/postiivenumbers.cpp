#include <iostream>

using namespace std;

int main() {

    double a, b, c, d, e, f;
    int sum = 0;

    cin >> a >> b >> c >> d >> e >> f;

    if( a >= 0) {
        sum = sum + 1;
    }

    if( b >= 0) {
        sum = sum + 1;
    }

    if( c >= 0) {
        sum = sum + 1;
    }

    if( d >= 0) {
        sum = sum + 1;
    }

    if( e >= 0) {
        sum = sum + 1;
    }

    if( f >= 0) {
        sum = sum + 1;
    }

    cout << sum << " valores positivos" << endl;

    return 0;
}
