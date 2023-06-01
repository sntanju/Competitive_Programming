#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b;
    cin >> a >> b;
    vector<int> v;

    for( ll i=0; i < a; i++){
        ll b;
        cin >> b;
        v.push_back(b);
    }

    string ans = "No";

    sort(v.begin(), v.end());

    for(int i=0; i< a; i++){
        int sum = v[i]+ b;
        if (binary_search(v.begin(), v.end(), sum)){
            ans = "Yes";
        }
    }


        cout << ans << endl;

    return 0;
}

