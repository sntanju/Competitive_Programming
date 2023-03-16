#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--){

        string a;
        cin >> a;

        cout << "Sum = " << (a[0]-'0') + (a[a.size()-1]-'0') <<endl;

    }

    return 0;
}

