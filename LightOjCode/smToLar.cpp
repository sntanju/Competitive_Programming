#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long t;
    cin >> t;

    for(ll i=0; i < t; i++){

        ll a, b, c;
        vector<ll> v;

        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());
        cout << "Case " << i+1 << ": ";
        for(ll j=0; j < v.size(); j++) {
            cout << v[j] << " ";
        }
        cout << endl;

    }

    return 0;
}


