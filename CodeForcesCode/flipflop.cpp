#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, sum=0;
        cin >> a;
        for(int i=0; i < a; i++){
            int b;
            cin >> b;
            if(b<0) sum++;
        }
        cout << sum << endl;
    }
    return 0;

}

