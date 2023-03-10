#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    a++;
    int arr[a+1] = {0};


    while(b--){
        int c, d;
        cin >> c >> d;

        if(c==1){
           arr[d]++;
        }
        if(c==2){
            arr[d] = arr[d]+2;
        }
        if(c==3){
            if(arr[d]>=2) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

    }

    return 0;

}
