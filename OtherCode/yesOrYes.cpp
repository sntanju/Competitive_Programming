#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    string input;
    cin >> test;

    for(int i = 0; i< test; i++) {
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if(input == "yes") {
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
