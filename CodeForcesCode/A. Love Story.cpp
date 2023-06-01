#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    string x = "codeforces";
    while(t--){
        string s;
        cin >> s;
        ll sum=0;
        for(ll i=0; i < 10; i++){
            if(s[i]!= x[i]) sum++;
        }
        cout << sum << endl;
     }

    return 0;
}

