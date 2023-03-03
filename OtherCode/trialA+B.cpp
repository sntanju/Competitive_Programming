#include<iostream>
using namespace std;

int main()
{
    int test, a, b, sum=0;
    cin >> test;

    for(int i = 0; i < test; i++) {
        cin >> a >> b;
        sum = a+b;
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
