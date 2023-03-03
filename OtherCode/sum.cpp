#include<iostream>
using namespace std;

int main()
{
    int test, a, b, c;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> a >> b >> c;

        if(a+b == c || a+c == b || b+c == a) {
        cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }


    }
    return 0;

}
