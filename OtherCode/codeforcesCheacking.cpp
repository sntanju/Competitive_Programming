#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name = "codeforces";
    char input;
    int test;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> input;
        if( name.find(input) != string::npos ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
