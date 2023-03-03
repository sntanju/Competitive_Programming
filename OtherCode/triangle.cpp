#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b ,c, triangle, trapizium;

    cin >> a >> b >> c;

    if( a + b > c && b + c > a && a + c > b) {
        triangle = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << triangle  << endl;
    }
    else{
        trapizium = ((a + b) * c) / 2;
        cout << "Area = " << fixed << setprecision(1) << trapizium  << endl;
    }


    return 0;
}
