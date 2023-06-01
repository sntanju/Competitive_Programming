#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll num){
    string s = to_string(num);
    sort(s.begin(), s.end());

    ll x = s[s.size()-1]-s[0];
    return x;
}

int main()
{
    ll t;
    cin >> t;

    while(t--){

        ll a, b;
        cin >> a >> b;
        ll ans = a, differ = -1;

        for(ll i=a; i <= b; i++ ){
            if( i > a+101) break;

            ll temp = func(i);
            if(temp > differ){
                ans = i;
                differ = temp;
            }
        }
        cout << ans << endl;

    }

    return 0;
}

