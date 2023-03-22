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
        sort(v.begin(), v.end());

        int y = v.size();
        v.erase(std::unique(v.begin(), v.end()), v.end());

        if(y==v.size()){
            cout<< "YES" << endl;
        }
        else cout << "NO" << endl;


        /*
        int x = 0;
        for(int i=0; i<= v.size(); i++){
            if(v[i] == v[i+1]) {
                cout << "NO" << endl;
                break;
            }
            else{
                x++;
            }
        }
        if(x>0){
                cout<<"YES"<<endl;
            }
        */

    }
    return 0;
}
