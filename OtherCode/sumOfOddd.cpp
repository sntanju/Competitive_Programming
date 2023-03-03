#include <iostream>

using namespace std;

int main() {

    int a, b;
    int sum = 0;
    cin >> a;
    cin >> b;


     if( b > a ) {
        for(int i = b-1; i > a; i--) {
            if(i % 2 != 0) {
            sum = sum + i;
            }

        }
    }

    if( a > b ) {
        for(int i = a-1; i > b; i--) {
            if(i % 2 != 0) {
            sum = sum + i;
            }
        }

    }



    cout << sum << endl;

    return 0;
}
