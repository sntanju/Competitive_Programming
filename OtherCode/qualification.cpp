#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> input;
    int a, b;
    cin >> a >> b;

    while(a--) {
        string s;
        cin >> s;
        input.push_back(s);
    }

    sort(input.begin(), input.begin()+b);

    for(int i = 0; i < b; i++) {
        cout << input[i] << endl;
    }


    return 0;
}



