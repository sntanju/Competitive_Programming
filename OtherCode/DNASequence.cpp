#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;

    ll ans=1, temp=1;
    bool flag = false;

    for(ll i=0; i < s.size()-1; i++){
        if(s[i] == s[i+1]){
            temp++;
            if(temp > ans) ans = temp;
        }
        else temp = 1;
    }

    cout << ans << endl;

    return 0;
}

