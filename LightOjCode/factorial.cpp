#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t;
   cin >> t;
   while(t--){
    ll a, fact=1;
    cin >> a;
    for(int i = 1; i <= a; i++){
        fact*=i;
    }
    cout << fact << endl;
   }
    return 0;
}




