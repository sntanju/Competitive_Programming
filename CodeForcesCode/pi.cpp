#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    string str = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    while(t--){

        string s;
        cin >> s;
        int sum = 0;

        for(int i=0; i < s.size(); i++){
            if(s[i] == str[i]) sum++;
            else break;
        }
        cout << sum << endl;
    }

    return 0;
}

