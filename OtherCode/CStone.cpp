#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    string s;
    cin >> s;
    ll c=0,i;
    for(i=0; i<t; i++){
        if(s[i]=='#'){
            if(i+1<t && s[i+1]=='.'){
                c++;
                s[i+1]='#';
            }
        }
    }

    cout << c << endl;

    return 0;
}

