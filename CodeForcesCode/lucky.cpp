#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int sum1=0, sum2=0;

        for(int i=0; i < 3; i++){
            int x = s[i]- '0';
            sum1+=x;
        }
        for(int i=3; i < 6; i++){
            int x = s[i]-'0';
            sum2+=x;
        }

        if(sum1==sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

