#include<bits/stdc++.h>
using namespace std;

int main()
{

        int a;
        double sum = 0, num = 0;
        vector<int> v;

        cin >> a;
        int y = a*5;

        while(y--){
            int b;
            cin >> b;
            v.push_back(b);
        }

        sort(v.begin(), v.end());

        for(int i=a; i < v.size()-a; i++){
            sum += v[i];
            num+=1;
        }
        double x = sum/num;
        cout << x << endl;



    return 0;

}
