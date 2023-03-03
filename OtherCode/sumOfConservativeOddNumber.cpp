#include <iostream>

using namespace std;

int main() {

    int cases, x, y;
    int sum = 0;

    cin >> cases;

    for( int i = 0; i < cases; i++ ) {
        cin >> x >> y;
        if( x < y ) {
            for( int i = x+1; i < y; i++ ) {
                if(i % 2 != 0) {
                    sum = sum+i;
                }
            }
        }

        else {
            for( int i = y+1; i < x; i++ ) {
                if(i % 2 != 0) {
                    sum = sum+i;
                }
            }
        }
        cout << sum << endl;
        sum = 0;

    }

    return 0;
}
