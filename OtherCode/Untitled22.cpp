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
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        s.erase( unique( s.begin(), s.end() ), s.end() );

        ll x = a-s.size();
       // cout << x << endl << endl << endl;

        if(x == 0) cout << 0 << endl;
        else if(s.size()== 1 && a%2==0 )cout << 1 <<  endl;
        else if(s.size()==1 && a%2 !=0) cout << 2 << endl;
        //else if(x<a) cout << a-x << endl;
        else cout << 1 << endl;
    }
    return 0;
}

