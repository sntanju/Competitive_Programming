#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    ll i;
    for(i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    //corner cases
    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    if(n==2){
        ll a1,a2,a3,a4;
        a1 = abs(v[0]-v[1]);
        a2 = abs((v[0]+x)-v[1]);
        a3 = abs(v[0]-(v[1]-x));
        a4 = abs((v[0]+x)-(v[1]-x));
        cout << min({a1,a2,a3,a4}) << endl;
        return 0;
    }
    v[0]=v[0]+x;
    v[n-1]=v[n-1]-x;
    if(v[0]<=v[n-1]){
        for(i=1; i<n-1; i++){
        ll a = v[i]-x, b=v[i]+x;
        if(a>= v[0]) v[i]=a;
        else if(b<=v[n-1]) v[i]=b;
        else{
            if(abs(v[0]-a) < abs(v[n-1]-b)) v[i]=a;
            else v[i] = b;
        }
    }
    sort(v.begin(),v.end());
    cout << abs(v[0]-v[n-1]) << endl;
    }
    else{
        v[0] -= x;
        v[1] += x;
        for(i=0; i<n; i++) v[i] = abs(v[i])%x;
        sort(v.begin(),v.end());
        cout << abs(v[n-1]-v[0]);
    }
    return 0;
}

