#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t ;
    cin >> t;
    while(t--){

        ll a, b;
        //string b;
        cin >> a >> b;
        string s;
        cin >> s;


        for(int i=0; i < a; i++){

            if(s[i]-'0' <= b){
                string str = to_string(b);
                s.insert(i, str);
                break;
            }

        }
        cout << s << endl;

    }

    return 0;
}

