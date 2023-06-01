#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll sum = b+c;


    for(ll i=1; i <= a; i++){
        ll x;
        cin >> x;
        if(sum == x){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}

