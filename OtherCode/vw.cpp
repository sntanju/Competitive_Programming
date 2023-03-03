#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'v' || input[i] == 'V') {
            a+=1;
        }
        else{
            a+=2;
        }

    }
    cout << a << endl;
    return 0;
}
