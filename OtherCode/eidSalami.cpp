#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if(x == y) {
        cout << (a+b)*2 << endl;
        return 0;
    }

    ll s = (a*x)-1;
    ll t = (b*y)-1;

    cout << max(s, t) << endl;



    return 0;
}

