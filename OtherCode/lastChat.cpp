#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = pow(2,n);
    int b = n * n;

    if( a > b ) {
        cout << "Yes" << endl;
    }

    else{
        cout << "No" << endl;
    }
    return 0;
}
