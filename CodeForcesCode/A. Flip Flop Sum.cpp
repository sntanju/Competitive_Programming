#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int siz = 1e5+10;
int a[siz];

int main()
{
    ll t;
    cin >> t;

    while(t--){

        ll n, sum = 0, ans = -1e9;
        cin >> n;

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        for(ll i = 1; i < n; i++) {
            if(a[i] == a[i+1]) {
                if(a[i] == 1) ans = max(ans, sum-4);
                else ans = max(ans, sum+4);
            }
            else
                ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}


