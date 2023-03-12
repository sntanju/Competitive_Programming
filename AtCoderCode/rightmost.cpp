#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

        for(int i=s.size(); i>=1; i--){
            if(s[i-1] == 'a') {
                cout << i << endl;
                return 0;
            }

        }

     cout << -1 << endl;
     return 0;

}
