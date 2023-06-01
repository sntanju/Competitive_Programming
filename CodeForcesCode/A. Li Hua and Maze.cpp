#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fnc(ll x, ll y, ll m, ll n )
{
    ll sum = 0;

    if(x+1 <= m && x+1 >= 1) sum++;
    if(x-1 <= m && x-1 >= 1) sum++;
    if(y+1 <= n && y+1 >= 1) sum++;
    if(y-1 <= n && y-1 >= 1) sum++;

    return sum;
}


int main()
{
    ll t;
    cin >> t;

    while(t--){

        ll m, n;
        cin >> m >> n;

        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll num1 = fnc(a, b, m, n );
        ll num2 = fnc(c, d, m, n );
        cout << min(num1, num2) << endl;

        ll sum1=0, sum2=0;


    }


    return 0;
}

