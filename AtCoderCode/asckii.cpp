#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll m, n;
   cin >> m >> n;

   ll i, j;

   ll ara[m][n];
   for(i=0; i < m; i++){
    for(j=0; j < n; j++){
        cin >> ara[i][j];
    }
   }
    for(i=0; i < m; i++){
        for(j=0; j<n; j++){
            if(ara[i][j] == 0){
                cout << ".";
            }
            else {
                cout << char(64+ara[i][j]);
            }

        }
        cout << endl;
    }
    return 0;

}


