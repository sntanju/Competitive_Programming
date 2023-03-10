#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){

        int a;
        string s;

        cin >> a;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), [] (char c) {
        return tolower(c);
        });
        s.erase(unique(s.begin(), s.end()), s.end());
        //cout << (s == "meow" ? "YES" : "NO") << "\n";

        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        //std::unique(s.begin(), s.begin() + s.size());

        //s.erase(unique(s.begin(), s.begin() + s.size()));

        if(s=="meow") cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}
