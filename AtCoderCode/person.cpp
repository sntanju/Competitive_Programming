#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    string s;
    cin >>s;
    string ans = "Yes";

    for(ll i=0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            ans = "No";
        }

    }
    cout << ans << endl;


    return 0;
}

