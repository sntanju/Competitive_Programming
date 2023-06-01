#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y;
        cin >> x >> y;

        ll z = a/2;

        if(a<2) cout << 0 << endl;
        else if( z >= b+c) cout << x*b+y*c << endl;
        else {
            if(x>y){

            }
        }
    }

    return 0;
}


