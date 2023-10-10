///   ***   ---            In the name of ALLAH        |||   ---   ***   ///
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll t;
    cin >> t;

    while(t--){

        ll n;
        cin >> n;

        double x = (n*20.0)/100;
        double y = 100/x;

        cout << ceil(y) << endl;


    }

    return 0;
}
