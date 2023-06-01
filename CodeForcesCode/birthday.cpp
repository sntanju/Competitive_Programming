#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;

        ll sum = a;

        for(ll i=1; i < c; i++){
            sum+=i;
        }
        if(sum >= b) cout<< "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

