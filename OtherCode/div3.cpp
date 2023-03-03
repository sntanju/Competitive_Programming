#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;



    while(t--){

        int m=0, e=0, o=0, w=0;

        int a;
        string s;

        cin >> a;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i = 0; i < a; i++){
            if(s[i] == 'm') m+=1;
            else if(s[i] == 'e') e+=1;
            else if(s[i] == 'o') o+=1;
            else if(s[i] == 'w') w+=1;
        }

        int sum = m+e+o+w;

        if(sum < a) cout << "NO" << endl;
        else if(a==sum && s=="meow") cout << "YES" << endl;

        else if(sum == a){
            for(int i=1; i <= a; i++){
                if( i >= 1 && i <= m && s[i] != 'm') {
                    cout << "NO" << endl;
                    break;
                }
                else if( i > m && i <= e && s[i] != 'e') {
                     cout << "NO" << endl;
                     break;
                }
                else if( i > e && i <= o && s[i] != 'o'){
                     cout << "NO" << endl;
                     break;
                }
                else if( i > o && i <= w && s[i] != 'w') {
                    cout << "NO" << endl;
                    break;
                }
                else cout << "YES" << endl;
            }
        }

    }

    return 0;
}
