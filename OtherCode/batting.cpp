#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    double answer;
    cin >> a >> b;

    if(a > b) {
        answer = b/a;
        cout << fixed << setprecision(3) << answer << endl;
    }

    else {
        answer = a/b;
        cout << fixed << setprecision(3) << answer << endl;
    }
    return 0;
}



