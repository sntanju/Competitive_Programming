#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<string> v;

    while(t--){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i=0; i < v.size(); i++ ){
        if(v[i] == "and" || v[i] == "not" ||v[i] == "that" ||v[i] == "the" || v[i] == "you"){
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;


    return 0;

}
