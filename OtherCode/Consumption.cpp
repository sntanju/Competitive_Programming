#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {

    int distance;
    double fuel;

    cin >> distance ;
    cin >> fuel ;

    double answer = distance / fuel;
    cout << fixed << setprecision(3) << answer << " km/l" << endl;

    return 0;
}
