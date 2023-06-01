#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll x;
    cin >> x;
    string s;
    cin >>s ;
    ll t=0, a=0;

    for(ll i=0; i < x; i++){
        if(s[i] == 'T') t++;
        else a++;
    }

    if(a > t) cout << "A" <<  endl;
    else if(t> a) cout << "T" << endl;
    else {
        if(s[s.size()-1] == 'T') cout << "A" << endl;
        else cout << "T" << endl;
    }


    return 0;
}

