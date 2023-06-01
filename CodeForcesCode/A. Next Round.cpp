#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;

    vector<ll> v;

    while(a--){
        ll c;
        cin >> c;
        v.push_back(c);
    }

    ll x = v[b-1];

    ll ans = 0;

    for(ll i=0; i < v.size(); i++){
        if(v[i] >= x  && v[i] > 0) ans++;
    }
    cout << ans << endl;

    return 0;
}

