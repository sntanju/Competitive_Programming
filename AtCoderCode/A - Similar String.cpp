#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    string x, y;
    cin >> x;
    cin >> y;
    bool flag = true;

    for(ll i = 0; i < t; i++){

        if(x[i] == y[i]) flag = true;
        else if((x[i] == '1' && y[i] == 'l')||(y[i] == '1' && x[i] == 'l'))flag = true;
        else if((x[i] == '0' && y[i] == 'o')||(y[i] == '0' && x[i] == 'o'))flag = true;

        else{
            flag = false;
            break;
        }
    }

    if(flag == true) cout << "Yes" <<  endl;
    else cout << "No" << endl;


    return 0;
}

