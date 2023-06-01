#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll window = 5*5;
    ll door = 8*6;

    ll ceil = (16*10)/2;
    ll house = 12*10;

    ll ans = ceil+ (house-(window+door));
    cout << ans << endl;

    return 0;
}

