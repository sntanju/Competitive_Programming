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

        ll x=0, y=0;
        vector<ll> v;

        for(ll i=0; i < a; i++){

            ll b;
            cin >> b;

            v.push_back(b);
            if(b == 1)x++;
            else y++;
        }

        if(y==0){
            cout << x-4 << endl;
        }

        else if(y==1){
            cout << x << endl;
        }

        else if(y>= 2 && x <2){
            cout << y-x << endl;
        }

        else if(y>= 2 && x >= 2){
            for(ll j = 0; j < a-1; j++){
                if(v[j] == -1 && v[j+1] == -1){
                    ll z = y-2;
                    cout << (x+2)-z << endl;
                    break;
                }

            }

        }


    }

    return 0;
}

