#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll x, y;
    cin >> x >> y;
    vector<int> v;

    for(ll i=0; i < x; i++){
        ll b;
        cin >> b;
        v.push_back(b);
    }

    for(ll i=0; i < v.size()-1; i++){
        if(v[i+1] -v[i] <= y ){
            cout << v[i+1] << endl;
            return 0;
        }

    }
    cout << -1 << endl;


    return 0;
}

