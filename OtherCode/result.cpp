#include<bits/stdc++.h>
using namespace std;

int main()
{


        int a, b;
        int sum = 0;
        vector<int> x;
        vector<int> y;
        cin >> a >> b;
        while(a--){
            int s;
            cin >> s;
            x.push_back(s);
        }
        while(b--){
            int k;
            cin >> k;
            y.push_back(k);
        }
        for(int i=y[0]; i< y.size(); i++){
            sum+= x[i-1];
        }
        cout << sum << endl;

    return 0;

}
