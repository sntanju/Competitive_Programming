
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    vector<int> v;

    for(int i=0; i < a; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    for(int j = v.size(); j >=b-1; j--){
        v[j] = 0;
    }

    for(int k=0; k < v.size(); k++){
        cout << v[k] << " ";
    }

    cout << endl;
    return 0;

}
