#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(a>= x && b>= y)cout << "YES" << endl;
        else if(a>= x && b+c >= y) cout << "YES" << endl;
        else if(b>= y && a+c >= x) cout << "YEs" << endl;

        else {
            int s = 0;
            int w = 0;

            if(a<x) s+= x-a;
            if(b<y) w+= y-b;

            if(s+w <= c)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}

