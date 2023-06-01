#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string s;
        cin >>s;

       s.erase( unique( s.begin(), s.end() ), s.end() );
        cout << s << endl;

    }

    return 0;
}

