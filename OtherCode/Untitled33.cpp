#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        string s;
        cin >> s;

        ll a = 0, b = 0;
        if(s[0] == 'A')a++;

        for(ll i=0; i < x-1; i++){


            if(s[i] == s[i+1]){
                if(s[i] == 'A')a++;
                if(s[i] == 'B')b++;
            }
        }

        cout << a << " " << b << endl;
    }

    return 0;
}

