#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, ab, cd;

    cin >> a >> b >> c >> d;

    ab = a + b;
    cd = c + d;

    if ( b>c && d>a && cd>ab && c>=0 && d>=0 && a%2 == 0 ) {
        cout << "Valores aceitos" << endl;
    }

    else{
        cout << "Valores nao aceitos" << endl;
    }


    return 0;
}
