#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        cout << s[s.size()-1]-96 << endl;
    }

    return 0;
}

