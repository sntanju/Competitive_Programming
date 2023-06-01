
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<ll> v;
    while(1){
        ll b;
        cin >> b;
        if(b==42) break;
        else v.push_back(b);
    }

    for(ll i=0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}



/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr;
    while(true){
        int x;
        cin>>x;
        if(x==42)
        break;
        arr.push_back(x);
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
*/

