#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll s, c;
    cin >> s >> c;

    bool arr[c+1];
    for(ll i=1; i <= c; i++){
        arr[i] = false;
    }

    for(ll i=1; i <= s; i++){
        for(ll j=i; j <= c; j+=i){
            arr[j] = !arr[j];
        }
    }
    ll sum = 0;

    for(ll i=1; i <= c; i++){
        if(arr[i] == true) sum+=i;
    }

    cout << sum << endl;
    return 0;
}

