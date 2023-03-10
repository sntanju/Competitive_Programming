#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    //transform(s.begin(), s.end());
    for(int i=0; i< s.size(); i++){
        s[i]=toupper(s[i]);
    }
    cout << s << endl;
    return 0;

}
