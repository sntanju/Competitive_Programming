#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for ( int i = 2; i <= n; i+=2) {
        if(n % 2 == 0) {
        cout << i << "^2 = " << i*i << endl;
        }
    }

    return 0;
}
