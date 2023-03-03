#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, a, b;
    string sign;

    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> sign;

        //char x = sign[0];
       // char y = sign[2];

        //a = (int)x -48;
        //b = (int)y -48;

        a = sign[0] - '0';
        b = sign[2] - '0';

        int answer = a+b;
        cout << answer << endl;

    }
    return 0;

}

