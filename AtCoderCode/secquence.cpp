#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;
    vector<string> v;
    while(a--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    //sort(v.begin(), v.end());
    for(int i = v.size()-1; i >= 0; i--){
            cout << v[i] << endl;
    }
    return 0;

}
