#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll a, b, c;
    cin >> a >> b >> c;

    if(a+b <= c) {
        cout << 0 << " " << 0 << endl;
    }
    else if(a>=c){
        cout << a-c << " " << b << endl;

    }
    else{
        cout << 0 << " " << b-(c-a) << endl;

    }

    return 0;
}


