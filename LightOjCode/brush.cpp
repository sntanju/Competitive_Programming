#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){

        int a;
        cin >> a;
        int sum = 0;

        for(int j = 0; j < a; j++){
            int b;
            cin >> b;
            if(b > 0) sum+=b;
        }
        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}






