#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin  >> t;
    while(t--){

        int a;
        cin >> a;

        vector<int> v;
        int sum=0;
        for(int i=0; i < a; i++){
            int b;
            cin >> b;
            v.push_back(b);
            sum+=b;
        }

        if(a > 1 && sum%2==0) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
    return 0;

}


