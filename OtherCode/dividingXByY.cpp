#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases, x, y;
    double answer;
    cin >> cases;

    for( int i = 0; i < cases; i++ ) {
        cin >> x >> y;
        if(y == 0) {
            cout << "divisao impossivel" << endl;
        }
        else{
            answer = (double)x / (double) y;

            cout << fixed << setprecision(1) << answer << endl;
        }
    }


    return 0;
}
