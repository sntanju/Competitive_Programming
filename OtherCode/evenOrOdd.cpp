#include <iostream>

using namespace std;

int main() {

    int number;
    int cases;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> number;

        if( number == 0 ) {
            cout << "NULL" << endl;
        }

        else if( number > 0 ) {
            if( number % 2 == 0) {
                cout << "EVEN POSITIVE" << endl;
            }
            else {
                cout << "ODD POSITIVE" << endl;
            }
        }

        else if( number < 0 ) {
            if( number % 2 == 0 ){
                cout << "EVEN NEGATIVE" << endl;
            }
            else {
                cout << "ODD NEGATIVE" << endl;
            }

        }
    }

    return 0;
}
