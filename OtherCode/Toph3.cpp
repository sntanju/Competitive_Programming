#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    for(ll i=1; i <= t; i++){
        if(t%i == 0) cout << i << endl;
    }

    return 0;
}

