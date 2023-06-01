#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){

        ll n;
        cin >> n;

        vector<ll> v;
        for(ll i=2; i <= n*2; i+=2){
            v.push_back(i);
        }

        for(ll j=0; j < v.size(); j++){

            if(n==1) cout << n;
            else if(j == v.size()-1) cout << v[j];
            else cout << v[j] << " ";
        }
        cout << endl;
    }

    return 0;
}

