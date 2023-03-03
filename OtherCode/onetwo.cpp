#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, num, input;
    cin >> test;


    while(test--) {
        vector<int> v;
        cin >> num;
        int two = 0;
            while(num--) {
                cin >> input;
                if ( input == 2) two++;
                v.push_back(input);
            }

            if(two == 0) cout << 1 << endl;
            else if(two%2 != 0) cout << -1 << endl;

            else {
               int x = two/2;
               int y=0;
               for(int i=0; i < v.size()-1; i++) {
                if(v[i] == 2) {
                    y++;
                    if(x == y) cout << i+1 << endl;
                }
               }

            }


    }

    return 0;
}
