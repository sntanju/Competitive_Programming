#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;

    string s2 = "";
    for(ll i= s.size()-1; i >= 0; i--){
        s2.push_back(s[i]);
    }
    if(s== s2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

