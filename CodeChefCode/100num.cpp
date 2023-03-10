#include <bits/stdc++.h>

using namespace std;

int main() {

    int a = 100;
    vector<int> v;
    while(a--){
        int b;
        cin >> b;
        v.push_back(b);
    }

    int num = v[0];
    int index = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > num){
            num=v[i];
            index = i+1;
        }
    }
    cout << num << endl;
    cout << index << endl;
    //cout << *max_element(v.begin(), v.end());
    return 0;
}
