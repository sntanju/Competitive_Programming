#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){

        ll a, b;
        cin >> a >> b;
        vector<ll> v;

        for(ll i=0; i < a; i++){
            ll c;
            cin >>c;
            v.push_back(c);
        }

    sort(v.begin(), v.end());

        for(ll i=0; i < b; i++){
            if(v[v.size()-1] > v[0]+ v[1]){
                v.erase(v.begin());
                v.erase(v.begin());
            }
            else{
                v.erase(v.end()-1);
            }
        }
        ll sum = 0;
        for(ll i=0; i < v.size(); i++){
            sum+=v[i];
        }
        cout << sum << endl;
    }

    return 0;
}

