#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){

       int sum = 0;

       string s;
       cin >> s;

       char c;
       cin >> c;

       for(int i = 0; i < s.size(); i++){
        if(c == s[i]) {
            sum++;
        }
       }

       cout << "Occurrence of " << c << " in " << s << " = " << sum << endl;

    }

    return 0;
}



