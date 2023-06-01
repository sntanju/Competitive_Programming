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
        ll sum = 0;
        for(ll i=0; i < a; i++){
            ll b;
            cin >> b;
            sum+=b;
        }
        if(sum < 0) cout << sum*(-1) << endl;
        else cout << sum << endl;


    }

    return 0;
}

