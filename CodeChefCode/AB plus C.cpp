#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
        if(a==1) cout << -1 << endl;
        else if(a < 100){
            cout << 1 << " " << 1 << " " << a-1 << endl;
        }

       /*
       else if(a<20){
           if(a%2 ==0){
               ll x = (a/2)-1;
               cout << x << " " << 2 << " " << 2 << endl;
           }

           else {
               ll x = a/2;
               cout << x << " " << 2 << " " << 1 << endl;
           }
       }
       */

        else{
            if(a%2 == 0){
                ll x = ((a/10) -1);
                ll y = a-(x*10);
                cout << x << " " << 10 << " " << y << endl;
            }
            else{
                ll x = (a/10);
                ll y = a-(x*10);
                cout << x << " " << 10 << " " << y << endl;
            }

        }
    }

    return 0;
}

