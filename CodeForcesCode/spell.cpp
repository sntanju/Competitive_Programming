#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int test;
    cin >> test;

    string t = "timur";
    sort(t.begin(), t.end());

    while(test--){
        int a;
        cin >> a;
        string s;
        cin >> s;

        if (s.find('T') != string::npos) {

            //transform(s.begin(), s.end(), s.begin(), ::tolower);
            for(int i=0; i < a; i++){
                if(s[i] == 'T'){
                    s[i] = 't';
                }
            }


            sort(s.begin(), s.end());

            if(s==t) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
        else cout << "NO" << endl;
    }


    return 0;
}

