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
        string s;
        cin >> s;

        vector<string> v;
        for(ll i=0; i <s.size()-1; i++){
            string temp;
            temp+=s[i];
            temp+=s[i+1];
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        //s.erase(unique(s.begin(), s.begin() + s.size()));
        v.erase(unique(v.begin(), v.end()), v.end());
        cout << v.size() << endl;


    }

    return 0;
}

