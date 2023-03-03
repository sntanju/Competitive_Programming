#include <iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main() {

    double a, b, c, d, r1, r2;
    cin >> a >> b >> c;

    if(((b*b) -4*a*c) < 0 || a == 0 ) {
        cout << "Impossivel calcular" << endl;
    }

    else {

        d = sqrt((b*b) -4*a*c);
        r1 = ((-b+d) / (2*a));
        r2 = ((-b-d) / (2*a));

        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}
