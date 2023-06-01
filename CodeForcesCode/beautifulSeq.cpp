#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int ans = 0;
            for(int i=1; i <= n; i++){
                int num;
                cin >> num;
                if(num==i || num < i){
                    ans = 1;
                }
            }
        if(ans == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        }

    return 0;
}

