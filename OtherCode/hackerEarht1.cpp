#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n;
        long long sum = 0;
        cin >> n;
        for(long long i = 0; i < n; i++) {
            long long m;
            cin >> m;
            sum+= (m*(i+1));
        }
        cout << sum << endl;
    }


    return 0;
}
