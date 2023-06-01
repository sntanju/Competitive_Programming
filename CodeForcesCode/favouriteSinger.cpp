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


    ll cnt = 0;
    ll temp = 1;
    ll ans = 0;

    sort(v.begin(), v.end());

    for(ll i=0; i < t-1; i++){
        if(v[i] == v[i+1]){
            temp++;
        }

        else{
            if(temp > cnt){
                cnt = temp;
                ans = 1;
                temp = 1;
            }
            if(temp == cnt){
                ans++;
                temp = 1;
            }

        }

    }

    if(cnt == 1) ans++;
    cout << ans << endl;


    return 0;
}

