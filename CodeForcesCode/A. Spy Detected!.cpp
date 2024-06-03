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
        vector<int> s;

        for(int i=0; i <a; i++){
            int b;
            cin >> b;
            v.push_back(b);
            s.push_back(b);
        }
        sort(v.begin(), v.end());
        int ans;
        if(v[0] != v[1]) ans = v[0];
        else ans = v[a-1];

        for(int j=0; j < s.size(); j++){
            if(s[j] == ans) {
                cout << j+1 << endl;
                break;
            }
        }

    }

    return 0;
}
 
