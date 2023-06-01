#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;

    while(t--){

        int a, b;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;

        reverse(y.begin(), y.end());
        string s = x + y;
        int sum = 0;

        for(int i=0; i < s.size(); i++){
            if(s[i-1] == s[i]) sum++;
        }

        if(sum <= 1) cout << "YES" << endl;
        else cout << "No" << endl;

    }
    return 0;
}

