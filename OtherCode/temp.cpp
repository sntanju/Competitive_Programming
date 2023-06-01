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
        bool flag = false;

       for(ll i = 0; i < a; i++){
        for(ll k = i+1; k < a; k++){
            for(ll j = i+1; j < k; j++){
                if((v[j]+v[j]) == (v[k]+v[i])){
                    flag = true;
                }
            }
          }
       }

        if(flag == true) cout << "No" << endl;
        else cout << "Yes" << endl;

    }
    return 0;
}

