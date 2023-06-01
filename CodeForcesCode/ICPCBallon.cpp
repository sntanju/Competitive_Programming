#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--){

        int a;
        string s;

        cin >> a;
        cin >> s;

        sort(s.begin(), s.end());
        s.erase( unique( s.begin(), s.end() ), s.end() );
        int x= 2*(s.size());
        cout << x+ (a-s.size()) << endl;
    }

    return 0;
}

