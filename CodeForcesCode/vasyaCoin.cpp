#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a==0) cout << 1 << endl;
        else cout << a+2 * b+1 << endl;
        //cout << (a == 0 ? 1 : a + 2 * b + 1) << '\n';
    }
    return 0;
}

