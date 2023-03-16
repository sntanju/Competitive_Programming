#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){

        string s;
        cin >> s;

        if(s[4] != 's'){
            s.insert(4, "s");
        }
        cout << "Case " << i << ": " << s << endl;
    }

    return 0;
}





