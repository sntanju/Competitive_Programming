#include <iostream>

using namespace std;

int main() {

    int M, N;


    while(1) {

        cin >> M >> N;

        if( M == 0 || N == 0 ) {
            return 0;
        }

        if( M >= 1 && N >= 1) {
            cout << "primeiro" << endl;
        }

        if( M >= 1 && N < 0) {
            cout << "quarto" << endl;
        }

        if( M < 0 && N < 0) {
            cout << "terceiro" << endl;
        }

        if( M < 0 && N >= 1) {
            cout << "segundo" << endl;
        }
    }

    return 0;
}

