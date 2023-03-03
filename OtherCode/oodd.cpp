#include <iostream>

using namespace std;

int main() {

    int number, sum;
    int target = 10000;
    cin >> number;

    for ( int i = 0; i <= target; i++) {
        if( i % number == 0 ) {
        sum = i + 2;
        cout << sum << endl;
        }
    }

    return 0;
}
