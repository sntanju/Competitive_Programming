#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, a, first=0, second=0;
    cin >> test;

    vector<int> x;

    for(int i = 0; i < test; i++) {
        cin >> a;
        x.push_back(a);
    }

    for(int j =0; j <  x.size(); j++) {
        if( x[j] > x[j+1] ) {
            second = x[j] - x[j+1];
            if(first > second) {
                first = second;
            }
        }

        else if( x[j] < x[j+1] ) {
            second = x[j+1] - x[j];
            if(first > second) {
                first = second;
            }
        }
    }

    cout << first << endl;

    return 0;
}
