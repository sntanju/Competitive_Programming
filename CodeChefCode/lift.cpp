#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin  >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(  a < 9) {
            if(a*b <= 500) {
                cout << "YES" << endl;

            }
            else {
                cout << "NO" << endl;

            }
        }
        else cout << "NO" << endl;
    }

    return 0;

}


