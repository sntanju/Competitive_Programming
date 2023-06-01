#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        bool ans = true;

        if(s.size() == 1 || s.size() == 2) {
            ans = false;
        }

        for(ll i=0; i< s.size(); i++){
            ll x = count(s.begin(), s.end(), s[i]);
            //.cout << x << endl;

            if(x == s.size()-1 || x == s.size()) {
                ans=false;
                break;
            };
        }


        if(ans == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

