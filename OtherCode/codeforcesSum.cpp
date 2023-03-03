#include<iostream>
using namespace std;

int main()
{
    int a, b, c, test;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> a >> b >> c;
        if(a == b+c || b == a+c|| c == a+b ) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
