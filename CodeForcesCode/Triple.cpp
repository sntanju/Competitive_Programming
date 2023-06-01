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

        int ans = -1;
        for(int j=0; j < v.size()-1; j++){
            if(v[j] == v[j+1] && v[j] == v[j+2]){
                cout << v[j] << endl;
                ans = v[j];
                break;
            }
        }
        if(ans == -1){
                cout << -1 << endl;
            }

    }

    return 0;
}

