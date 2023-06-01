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
        string s;
        cin >> s;
        bool ans = true;

        ll ara[26] = {0};
        for(ll i=0; i <= a; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ara[s[i]-97]++;
            }
        }

        ll maxx = ara[0];
        for(ll i=0; i < 26; i++){
            if(ara[i] > maxx) maxx = ara[i];
        }

        sort( s.begin(), s.end() );
        s.erase( unique( s.begin(), s.end() ), s.end() );

        if(a < 3) ans = false;
        if(maxx >= b && s.size() >= b) ans = true;
        else ans = false;

        if(ans == false) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}

/*
    2
3 4
xyz

5 3
abaca

*/

