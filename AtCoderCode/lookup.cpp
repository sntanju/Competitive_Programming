
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string a, b;
    cin >> a;
    cin >> b;
    if (a.find(b) != std::string::npos) {
    std::cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;

}
