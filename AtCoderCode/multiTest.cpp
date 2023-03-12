#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;
        int sum = 0;
       // vector<int> v;
        for(int i=0; i < a; i++){
            int b;
            cin >> b;
            if(b%2 != 0) sum+=1;
            //v.push_back(b);
        }
        cout << sum << endl;
    }

    return 0;

}
