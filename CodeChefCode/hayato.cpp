#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;
    while(t--){

        int a;
        cin >> a;
        vector<int> v;

        for(int i=0; i < a; i++){

            int b;
            cin >> b;
            v.push_back(b);
        }

        vector<int> x;
        vector<int> y;

        for(int i=0; i < v.size(); i++){
            if(v[i]%2==0){
                x.push_back(v[i]);
            }
            else y.push_back(v[i]);
        }

        if(y.size()>=3){
            cout << "YES" << endl;
            cout << y[0] << " " << y[1] << " " << y[2] << endl;
        }

        else if(y.size() >= 1 && x.size() >= 2){
            cout << "YES" << endl;
            cout << x[0] << " " << x[1] << " " << y[0] << endl;
        }
        else cout << "NO" << endl;

    }
    return 0;
}
