#include <iostream>

using namespace std;

int main() {

    int a, b, c, first, second, third;
    cin >> a >> b >> c;

    if( a > b && a > c) {
        first = a;
        if( b > c){
            second = b;
            third = c;
        }
        else{
            second = c;
            third = b;
        }
    }


    if( b > a && b > c) {
        first = b;
        if(a > c) {
            second = a;
            third = c;
        }
        else{
            second = c;
            third = a;
        }
    }

    if (c > a && c > b){
        first = c;
        if(a > b){
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    cout << third << endl;
    cout << second << endl;
    cout << first << endl << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
