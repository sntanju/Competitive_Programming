#include<bits/stdc++.h>
using namespace std;

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
        int x = v[0];
        int sum=0;
        for(int i=0; i < v.size(); i++){
            if(v[i]!= x)sum++;
        }
        cout << sum << endl;
    }

    return 0;
}

