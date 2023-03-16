#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
        ll x = sqrt(a);
        if(x*x == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}



