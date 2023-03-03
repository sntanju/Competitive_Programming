#include <iostream>

using namespace std;

int main() {

    int number, i;
    cin >> number;
    int target;
    if ( number % 2 != 0 ) {
        target = number + 11;
    }

    if ( number % 2 == 0 ) {
        target = number + 12;
    }

    for( i = number; i <=target; i++) {
        if(i % 2 != 0 ) {
            cout << i << endl;
        }
    }

    return 0;
}

