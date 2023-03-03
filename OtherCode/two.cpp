#include<bits/stdc++.h>
using namespace std;

int main()
{

        string a;
        cin >> a;
        int sum = 0;
        for(int i = 0; i<a.size(); i++){

            if(a[i] >= 'a' && a[i] < 'z') {
                sum+= 1;
            }
        if(a[i] >= 'A' && a[i] <= 'Z' ){
            sum+= 1;
            break;
        }
        }
        cout << sum << endl;


    return 0;

}

