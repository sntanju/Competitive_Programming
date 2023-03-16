#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    for(ll i = 1000; i >0; i--){

        if( i != 1000 && i%5==0){
            cout << i << endl;
        }
        else cout << i << " ";
    }
    return 0;
}
