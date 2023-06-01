#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll y;
    cin >> y;
    while(y--){
        ll a;
        cin >> a;

        vector<ll> t;
        vector<char> l;
        vector<char> r;

        //Taking  Input

       for(ll i=0; i < a; i++){

            ll x;
            cin>> x;
            t.push_back(x);

            string s;
            cin >> s;
            l.push_back(s[0]);
            r.push_back(s[1]);
       }

       // For Left Skill
       ll left = -1, right = -1, ans = 0;

       for(ll i=0; i < l.size(); i++){
            if(l[i] == '1'){
                if(left == -1) left = t[i];
                else left = min(left, t[i]);
            }
       }

       // For Right Skill
       for(ll i=0; i < r.size(); i++){
            if(r[i] == '1'){
                if(right == -1) right = t[i];
                else right = min(right, t[i]);
            }
       }

       // Calculating Answer
       if(left== -1 || right == -1){
        cout << -1 << endl;
        continue;
       }
        ans = left+right;

        for(ll i=0; i < l.size(); i++){
            if(l[i] == '1' && r[i] == '1'){
                if(t[i] < ans ) ans = t[i];
            }
        }

       cout << ans << endl;
    }

    return 0;
}

