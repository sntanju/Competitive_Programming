#include <iostream>

using namespace std;

int main() {

    int x, y;
    while(1) {
        cin >> x >> y;
        if( x > y ) {
            cout << "Decrescente" << endl;
        }
        if( y > x ) {
            cout << "Crescente" << endl;
        }
         if( x == y ) {
            return 0;
         }
    }

    return 0;
}
