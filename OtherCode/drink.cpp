#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t, sum=0;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        sum+= a;
    }
     cout << fixed << sum/t << setprecision() << endl;
    return 0;
}

