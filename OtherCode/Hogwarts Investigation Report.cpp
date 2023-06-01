#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    while(t--){

        string s;
        //cin.getline(s);
        getline(cin, s);
        //scanf(" %[^/n]", s);
        reverse(s.begin(), s.end());
        //cout << s << endl;

        for(ll i=0; i < s.size(); i++){

            if(s[i] >= 'a' && s[i] <= 'z'){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    s[i] = s[i];
                }
                else if(s[i] == 'b') s[i] =  'z';
                else if(s[i] == 'f') s[i] = 'd';
                else if(s[i] == 'j')  s[i] =  'h';
                else if(s[i] == 'p')  s[i] =  'n';
                else if(s[i] == 'v') s[i] =  't';
                else s[i] = s[i]-1;
            }

            else{
                 s[i] = s[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}

