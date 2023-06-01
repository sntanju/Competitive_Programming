#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    ll sum = t;
    vector<ll> v;


    while(t >= 10){
        ll a = t%10;
        t/=10;
        v.push_back(a);
    }

    ll second = v[0]*100+ t*10 + v[1];
    ll third = v[1]*100 + v[0]*10 + t;

    cout <<  sum + second + third << endl;

    return 0;
}

