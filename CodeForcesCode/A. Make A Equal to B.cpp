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
        vector<ll> v;
        vector<ll> w;

        for(ll i=0; i < a; i++){
            ll b;
            cin >> b;
            v.push_back(b);
        }
        for(ll j=0; j < a; j++){
            ll b;
            cin >> b;
            w.push_back(b);
        }

        ll sum=0;
        ll zero1 = 0;
        ll zero2 = 0;
        for(ll x=0; x<a; x++){
            if(v[x] == 0) zero1++;
            if(w[x] == 0) zero2++;
        }

        if(zero1 == zero2 && zero1 == 0) cout << 0 << endl;
        else if(zero1 == zero2) cout << 1 << endl;
        else if(zero1 > zero2) cout << (zero1-zero2)+1 << endl;
        else cout << (zero2-zero1)+1 << endl;;
    }

    return 0;
}

