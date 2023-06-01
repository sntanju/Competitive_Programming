#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll h, w;

    while(1){
        cin >> h >> w;
        if(h == 0 && w == 0) break;

        for(ll i = 1; i <= h; i++){
            for(ll j = 1; j <= w; j++){
                if( i%2 == 1){
                    if( j%2 == 1) cout << "#";
                    else cout << ".";
                }
                else{
                    if( j%2 == 1) cout << ".";
                    else cout << "#";
                }
            }
            cout << endl;
        }
         cout << endl;
    }
    return 0;
}


