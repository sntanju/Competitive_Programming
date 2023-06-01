#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a  >> b;
        if((a+b)%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

