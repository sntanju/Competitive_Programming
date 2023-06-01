#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;

    ll sz = s.size()-1;
    ll sum = 0;

    while(sz >= 0 && s[sz] == ' '){
        sz--;
    }
     while(sz >= 0 && s[sz] != ' '){
        sz--;
        sum++;

    }



    /*
    for(ll i = s.size()-1; i >= 0; i--){
        if(s[i] != ' '){
            sum++;
            if(s[i-1] == ' '){
                break;
            }
        }
    }
    */

    cout << sum << endl;
    return 0;
}

