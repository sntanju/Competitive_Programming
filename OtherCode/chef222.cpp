#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<int, string> mp;

    while(t--){
        int a;
        string b;
        cin >> b >> a;
        mp[a] = b;
    }

    cout << "Selise Coding Challenge 2023 Winners" << endl;
    auto it = mp.begin();

        cout << "Winner: " << it->second << " => " << it->first << endl;
        it++;
        cout << "1st Runner Up: " << it->second << " => " << it->first << endl;
        it++;
        cout << "2nd Runner Up: " << it->second << " => " << it->first << endl;



return 0;
}
