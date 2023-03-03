#include <iostream>
 #include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin >> a;
    cin >> b;

    double answer;
    answer = (a*b) / 12.0;
    cout << fixed << setprecision(3) << answer << endl;

    return 0;
}
