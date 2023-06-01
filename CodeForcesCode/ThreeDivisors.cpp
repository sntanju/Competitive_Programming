#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

        int n;
        cin >> n;
        int sqr;

        for(int i=1; i <= n; i++){
            if(i*i >= n){
                if(i*i == n) sqr = i;
                else sqr = i-1;
            }
        }

        int cnt = 0;
        for(int i=1; i <= sqr; i++){
            if(n%i == 0){
                if(n/i == i) cnt++;
                else cnt =cnt+2;
            }
        }


        if(cnt==3) cout << "true";
        else cout << "false";

    return 0;
}

