#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a , b, c;
    cin >> a >> b >> c;

    string s;
    cin >> s;

    ll x=0, y=0, z=0;

    if(a > b && a > c){
        x=a;
        if(b>c){
            y=b;
            z=c;
        }
        else{
            y=c;
            z=b;
        }
    }


    if(b > a && b > c){
        x=b;
        if(a>c){
            y=a;
            z=c;
        }
        else{
            y=c;
            z=a;
        }
    }

        if(c > b && c > a){
        x=c;
        if(b>a){
            y=b;
            z=a;
        }
        else{
            y=a;
            z=b;
        }

        }

        for(ll i=0; i< 3; i++){
            if(s[i] == 'A') cout << z << " ";
            if(s[i] == 'B') cout << y << " ";
            if(s[i] == 'C') cout << x << " ";
        }
        cout << endl;


    return 0;

}

