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
        vector<int> x;
        vector<int> y;

        for(int i=0; i< a; i++){
            int b;
            cin >> b;
            x.push_back(b);
        }
        for(int i=0; i< a; i++){
            int b;
            cin >> b;
            y.push_back(b);
        }
        for(int i=0; i< a; i++){
            if(x[i] > y[i])swap(x[i], y[i]);
        }

        int max1 = max(x.begin(), x.end());
        int max2 = max(y.begin(), y.end());
        if(max1 == max2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

