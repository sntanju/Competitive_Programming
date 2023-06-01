#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;

    vector<ll> v;
    vector<ll> w;

    for(ll i=1; i <= a; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }

    for(ll j=1; j <= a; j++){
        ll y;
        cin >> y;
        w.push_back(y);
    }

    if(std::find(v.begin(), v.end(), b) != v.end()){

        ll ind = 0;
        ll num = 0;

        for(ll i=0; i < a; i++){
            if(v[i] == 2){
                if(w[i] > num){
                    ind = i;
                    num = w[i];
                }

            }
        }
        cout << ind+1 << endl;
    }



    else {
        ll ans = 0;
        for(ll i=0; i < a; i++){
            if(w[i] > w[i+1]){
                ans = i;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}

