#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> v;
    while(a--){
        int b;

        cin >> b;

        if(b%2 == 0) {
            v.push_back(b);
        }
    }

    for(int i=0;i < v.size(); i++){
        if(i== v.size()-1) {
            cout << v[i];
        }
        else cout << v[i] << " ";
    }
    cout << endl;

    return 0;

}

