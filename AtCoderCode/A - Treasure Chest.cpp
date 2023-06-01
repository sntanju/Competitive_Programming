#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    string s;
    cin >> s;

    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    if(s[0] == '|' && s[1] == '*' && s[2] == '|') cout << "in" << endl;
    else cout << "out" << endl;

    return 0;
}

