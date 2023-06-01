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
            cin >>b;
            v.push_back(b);
        }

        ll sum = 0;
        ll temp = 0;

        for(ll i=0; i < a; i++){

            if(v[i] == 0){
                for(ll j=i; j < a; j++){
                    if(v[j] == 0)temp++;
                    else break;
                }
            }
            if(temp > sum){
                sum=temp;
            }
            temp=0;
        }
        cout << sum << endl;
    }

    return 0;
}

