#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;

        if((a[a.size()-1]-'0')%2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }

    return 0;
}
