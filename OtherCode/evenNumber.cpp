#include <iostream>

using namespace std;

int main() {

    int i;

    for( i = 2; i <=100; i+=2) {
        if(i % 2 == 0 ) {
            cout << i << endl;
        }
    }

    return 0;
}
