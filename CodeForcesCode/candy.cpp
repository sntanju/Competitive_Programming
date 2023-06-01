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
        vector<int> v;
        for(int i=0; i < a; i++){
            int b;
            cin >> b;
            v.push_back(b);
        }
        sort(v.begin(), v.end());
        int sum=0, ans = -1;
        for(int j=0; j <= a; j++){
            if(v[j] == v[j+1]){
                sum++;
                if(sum==3) {
                    ans = v[j];
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}

