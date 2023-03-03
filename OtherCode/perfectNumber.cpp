#include <iostream>

using namespace std;

int main() {

    int cases, number;
    cin >> cases;
    int sum = 0;

    for( int i = 0; i < cases; i++ ) {
        cin >> number;
        for(int i = 1; i < number; i++) {
            if( number % i == 0 ) {
                sum = sum+i;

            }
        }

        if( number == sum ) {

            cout <<number << " eh perfeito" << endl;

        }


        else {

            cout << number << " nao eh perfeito" << endl;

        }

        sum = 0;

    }

    return 0;
}
