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
        for(ll i=0; i < a; i++){
            ll b;
            cin >> b;
            ll x = a-b+1;
            v.push_back(x);
        }

        for(ll i=0; i < a; i++){
            if(i == a-1) cout<< v[i];
            else cout<< v[i] <<" ";
        }
        cout << endl;
    }


    return 0;
}

