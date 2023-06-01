#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

        ll a, b, c;
        cin >> a >> b >> c;

        ll ans = 0;

        for(ll i=a; i <= b; i++){
           ll sqr;

           for(ll j=1; j <= i; j++){
            if(j*j >= i){
                if(j*j == i) sqr = j;
                else sqr = j-1;
                break;
                }
            }
            ll cnt = 0;
            for(ll j=1; j <= sqr; j++){
                if(i%j == 0){
                    if(i/j == j) cnt++;
                    else cnt =cnt+2;
                }
            }
           if(cnt==c) ans++;
        }

        cout << ans <<endl;

    return 0;
}

