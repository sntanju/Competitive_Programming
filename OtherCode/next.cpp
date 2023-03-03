#include<bits/stdc++.h>
using namespace std;

int main()
{

    int s, t, sum=0;
    cin >> s >> t;
    vector<int> v;

    for(int i = 0; i < s; i++ ){
        int a;
        cin >> a;
        v.push_back(a);
    }

    for(int j = 0; j < v.size(); j++){
        if( v[j] > 0 && v[j] >= v[t] ) sum+=1;
    }

    cout << sum << endl;

    return 0;
}
