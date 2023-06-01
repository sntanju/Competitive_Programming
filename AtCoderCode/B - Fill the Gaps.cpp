#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    vector<ll> v;

    for(ll i=0; i < t; i++){
        ll b;
        cin >> b;
        v.push_back(b);
    }

    vector<ll> x;

    //

    for(ll i=0; i < t-1; i++){

        if(v[i] - v[i+1] >= 1){
            for(ll j= v[i]; j > v[i+1]; j--){
                x.push_back(j);
            }
        }

        else if(v[i+1] - v[i] >= 1){
            for(ll j= v[i]; j < v[i+1]; j++){
                x.push_back(j);
            }
        }
        else x.push_back(v[i]);

    }
    x.push_back(v[v.size()-1]);

    for(ll i=0; i < x.size(); i++){
        if(i == x.size()-1) cout << x[i];
        else cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}

