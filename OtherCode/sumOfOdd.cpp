#include <iostream>

using namespace std;

int main() {

    int X, Y;
    int sum = 0;

    cin >> X;
    cin >> Y;

    if( X < Y ) {
        for( int i = X-1; i < Y; i++ ) {
            if( i % 2 != 0 ) {
                sum = sum + i;
            }
        }
    }

    else{
        for( int i = Y; i < X; i++ ) {
            if( i % 2 != 0 ) {
                sum = sum + i;
            }
        }
    }

    cout << sum << endl;
    return 0;
}
