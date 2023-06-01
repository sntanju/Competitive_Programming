#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n , m;
    cin >> n >> m;

    vector<ll> v;

    for(ll i=1; i <= n; i++){
        for(ll j=1; j<= m; j++){
             v.push_back(i);
        }
    }

    vector<ll> x;

    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            ll b;
            cin >> b;
            x.push_back(b);

        }
    }
    ll ans = 0;
    sort(x.begin(), x.end());

    for(ll i=0; i < v.size(); i++){
        if(v[i] != x[i]) ans++;
    }

    cout << v.size() << endl << x.size() << endl;

    //ll ans = (v.size())/2;
    cout << ans << endl;




    return 0;
}

