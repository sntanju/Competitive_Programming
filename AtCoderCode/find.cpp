#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    vector<int> v;

    while(t--){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int maxi = v[0];
    int index = 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > maxi) {
            maxi = v[i];
            index = i+1;
        }

    }
    cout << index << endl;
     return 0;

}

