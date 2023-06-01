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
            v.push_back(b);
        }
        sort(v.begin(), v.end());

        /*
        if( v[0] < 0 && v[1] < 0 && ){
            cout << v[0]*v[1] << endl;
        }

        else {
            ll x = v[v.size()-1]*v[v.size()-2];
            cout << x << endl;
        }
        */
        ll x = v[v.size()-1]*v[v.size()-2];
        ll y = v[0]*v[1];

        cout << max(x, y) << endl;


    }

    return 0;
}

