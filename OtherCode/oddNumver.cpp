#include <iostream>

using namespace std;

int main() {

    int number, i;
    cin >> number;

    for( i = 1; i <=number; i+=2) {
        if(i % 2 != 0 ) {
            cout << i << endl;
        }
    }

    return 0;
}
