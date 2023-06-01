#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;

    //for(int i=0; i < s.size(); i=i+2) {
      //  s.erase(s[i]);
   // }
    sort(s.begin(), s.end());

    //s.erase( unique( s.begin(), s.end() ), s.end() );

    cout << s <<endl;

    return 0;
}

