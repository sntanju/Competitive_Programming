#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    vector<ll> v;

    for(ll i=0; i < t; i++ ){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    ll ans = v[0];

    for(ll i=0; i < v.size(); i++){
        if(v[i+1] > v[i]){
            ans = v[i+1];
        }
        else break;
    }
    cout << ans << endl;

    return 0;
}

